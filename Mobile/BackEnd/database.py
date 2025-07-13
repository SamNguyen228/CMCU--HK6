from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker, declarative_base

# Kết nối tới SQL Server
DATABASE_URL = "mssql+pyodbc://sa:SamIT6@localhost/AppPriceWise?driver=ODBC+Driver+17+for+SQL+Server"

engine = create_engine(DATABASE_URL)
SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine)
Base = declarative_base()
