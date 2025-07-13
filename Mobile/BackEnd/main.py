from fastapi import FastAPI, Body, Depends, Form, HTTPException, status
from fastapi.responses import HTMLResponse
from fastapi.middleware.cors import CORSMiddleware
from sqlalchemy.orm import Session
from pydantic import BaseModel, EmailStr
from email.mime.text import MIMEText
import smtplib

import models, schemas
from database import SessionLocal, engine
from models import User

# --- Khởi tạo app ---
app = FastAPI()

# Cho phép mọi origin để React Native có thể truy cập API
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

# Tạo bảng nếu chưa có
models.Base.metadata.create_all(bind=engine)

# --- Dependency DB ---
def get_db():
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close()

# --- Tạo user ---
@app.post("/users/", response_model=schemas.UserOut)
def create_user(user: schemas.UserCreate, db: Session = Depends(get_db)):
    if db.query(User).filter(User.email == user.email).first():
        raise HTTPException(status_code=400, detail="Email đã tồn tại")
    db_user = User(**user.dict())
    db.add(db_user)
    db.commit()
    db.refresh(db_user)
    return db_user

# --- Đăng nhập ---
@app.post("/login")
def login(data: dict = Body(...), db: Session = Depends(get_db)):
    user = db.query(User).filter(User.email == data.get("email")).first()
    if not user or user.password_hash != data.get("password"):
        raise HTTPException(status_code=401, detail="Sai tài khoản hoặc mật khẩu")

    return {
        "success": True,
        "user": {
            "id": user.user_id,
            "email": user.email,
            "username": user.username
        }
    }

# --- Quên mật khẩu ---
class ForgotPasswordRequest(BaseModel):
    email: EmailStr

@app.post("/forgot-password")
def forgot_password(data: ForgotPasswordRequest, db: Session = Depends(get_db)):
    user = db.query(User).filter(User.email == data.email).first()
    if not user:
        raise HTTPException(status_code=404, detail="Email không tồn tại")

    subject = "Khôi phục mật khẩu"
    body = f"""Xin chào {user.username},

Bạn đã yêu cầu khôi phục mật khẩu.

Truy cập liên kết sau để đặt lại mật khẩu:
http://172.17.153.219:8000/reset-password/{user.user_id}

(Nếu bạn không yêu cầu điều này, hãy bỏ qua email này.)
"""
    try:
        send_email(to=data.email, subject=subject, body=body)
    except Exception as e:
        raise HTTPException(status_code=500, detail="Gửi email thất bại")

    return {"success": True, "message": "Đã gửi email khôi phục mật khẩu"}

# --- Gửi email ---
def send_email(to: str, subject: str, body: str):
    smtp_server = "smtp.gmail.com"
    smtp_port = 587
    smtp_user = "duonghoangsamet@gmail.com"
    smtp_password = "fuym cdrm oqep kgyh"  # App Password

    msg = MIMEText(body, "plain", "utf-8")
    msg["Subject"] = subject
    msg["From"] = smtp_user
    msg["To"] = to

    with smtplib.SMTP(smtp_server, smtp_port) as server:
        server.starttls()
        server.login(smtp_user, smtp_password)
        server.send_message(msg)

# --- Hiển thị form đặt lại mật khẩu ---
@app.get("/reset-password/{user_id}", response_class=HTMLResponse)
def reset_password_form(user_id: int):
    return f"""
    <html>
        <head>
            <title>Đặt lại mật khẩu</title>
        </head>
        <body>
            <h2>Đặt lại mật khẩu</h2>
            <form action="/reset-password/{user_id}" method="post">
                <input type="password" name="new_password" placeholder="Mật khẩu mới" required />
                <button type="submit">Đặt lại</button>
            </form>
        </body>
    </html>
    """

# --- Xử lý đặt lại mật khẩu (từ form HTML) ---
@app.post("/reset-password/{user_id}", response_class=HTMLResponse)
def reset_password_submit(user_id: int, new_password: str = Form(...), db: Session = Depends(get_db)):
    user = db.query(User).filter(User.user_id == user_id).first()
    if not user:
        raise HTTPException(status_code=404, detail="Người dùng không tồn tại")

    user.password_hash = new_password
    db.commit()

    return HTMLResponse("<h3>✅ Mật khẩu đã được đặt lại thành công.</h3>")
