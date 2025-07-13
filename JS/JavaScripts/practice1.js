// Bài 1: Khai báo biến: Dùng const để lưu tên trường học (VD: "THPT Hanoi").
// Dùng let để lưu số lượng học sinh (VD: 500).
// In thông tin ra console.
// Thử cập nhật số lượng học sinh (tăng thêm 50) và in lại.
// Thử thay đổi tên trường học (sẽ lỗi).

const schoolName = "THPT Hanoi Amsterdam";
let studentCount = 500;

console.log("School Name: " + schoolName);
console.log("Student Count: " + studentCount);

// Update student count
studentCount = 550;
console.log("Updated Student Count: " + studentCount);
// schoolName = "THPT Nguyen Hue"; // This will throw an error because schoolName is a constant


// Bài 2: Làm việc với object: 
// Dùng const để khai báo object classroom với các thuộc tính: name (tên lớp), students (số học sinh).
// Thay đổi số học sinh trong object.
// In object trước và sau khi thay đổi.
// Thử gán lại object mới (sẽ lỗi).
const classroom = {
    name: "Class 23IT6",
    students: 45
};
console.log("Classroom Name: " + classroom.name);
console.log("Number of Students: " + classroom.students);
// Update number of students
classroom.students = 50;
console.log("Updated Number of Students: " + classroom.students);
// classroom = {name: "Class 23IT7", students: 40}; // This will throw an error because classroom is a constant

// Bài 3: Thử với var để thấy vấn đề: 
// Khai báo biến counter bằng var trong vòng for (var i = 0; i < 3; i++).
// In giá trị i sau vòng lặp (sẽ không lỗi, nhưng không mong muốn).
// Thay var bằng let và chạy lại, quan sát sự khác biệt.

for (var i = 0; i < 3; i++) {
    console.log("i: " + i);
}
console.log("Value of i after loop: " + i);

// for (let i = 0; i < 3; i++) {
//     console.log("i: " + i);
// }
// console.log("Value of i after loop: " + i); // error: i is not defined

//////////////////////////////////////////////////////////////////////////
// Câu hỏi:
// 1. Tại sao const vẫn cho phép thay đổi thuộc tính của object, nhưng không cho gán lại object mới? 
// 2. Trong trường hợp nào bạn sẽ dùng let thay vì const? 
// 3. Nếu bạn thấy code cũ dùng var, bạn sẽ thay bằng let hay const? Tại sao? 
// 4. Điều gì xảy ra nếu bạn truy cập biến let trước khi khai báo? 


// 1. Const cho phép thay đổi thuộc tính của object vì nó chỉ bảo vệ tham chiếu đến object, không phải nội dung bên trong. 
// Bạn không thể gán lại object mới vì const bảo vệ tham chiếu đó.
// 2. Bạn sẽ dùng let khi cần thay đổi giá trị của biến trong tương lai, ví dụ trong vòng lặp hoặc khi giá trị có thể thay đổi.
// 3. Tôi sẽ thay bằng let nếu biến đó cần thay đổi giá trị trong tương lai, hoặc const nếu nó không thay đổi. Var thường
// không được khuyến nghị vì phạm vi của nó là toàn cục hoặc hàm, có thể gây ra xung đột. 
// 4. Nếu bạn truy cập biến let trước khi khai báo, bạn sẽ gặp lỗi "ReferenceError" vì biến chưa được khởi tạo. 
// Điều này khác với var, nơi bạn có thể truy cập biến trước khi khai báo nhưng giá trị sẽ là undefined.