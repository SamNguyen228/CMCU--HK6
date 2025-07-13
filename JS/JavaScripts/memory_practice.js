// Bài 1: Biến nguyên thủy 
// Khai báo 3 biến: var num1 = 42, let num2 = 3.14, const str = "Hello".
// In giá trị ra console.
// Thử gán lại giá trị cho num1, num2, str và quan sát kết quả.
// Mô tả: Giá trị được lưu ở đâu (Stack/Heap)?

var num1 = 42;
num1 = 100; // This is allowed because num1 is declared with var
let num2 = 3.14;
num2 = 2.71; // This is allowed because num2 is declared with let
const str = "Hello";
// str = "World"; // This will throw an error because str is a constant

console.log(num1, num2, str);

// Mô tả: Giá trị của num1 và num2 được lưu trong Stack vì chúng là kiểu dữ liệu nguyên thủy (primitive types).
// Giá trị của str cũng được lưu trong Stack vì nó là một chuỗi (string), nhưng vì str là một hằng số (constant), nên không thể thay đổi giá trị của nó.


// Bài 2: Biến object 
// Khai báo: const user = { name: "Tuan", age: 20 }.
// Thay đổi user.age thành 21.
// Thử gán user = { name: "Nam" } (sẽ lỗi).
// Mô tả: Tham chiếu và nội dung được lưu ở đâu? Tại sao user.age thay đổi được?

// const user = {
//     name: "Tuan",
//     age: 20
// };

// user.age = 21;
// user = {name: "Nam"};

// console.log(user);

// // Mô tả: Tham chiếu của user được lưu trong Stack, nhưng nội dung của object (các thuộc tính name và age) được lưu trong Heap.
// // Vì user là một object, nên bạn có thể thay đổi các thuộc tính của nó mà không cần phải gán lại toàn bộ object.
// // Việc thay đổi user.age thành 21 là hợp lệ vì bạn chỉ đang thay đổi giá trị của thuộc tính, không phải gán lại toàn bộ object.
// // Việc gán lại user = {name: "Nam"} sẽ lỗi vì bạn đang cố gắng gán lại tham chiếu của một hằng số (constant), điều này không được phép trong JavaScript.

// // Dự đoán kết quả và giải thích: Biến nào được giải phóng sau khối if? Tại sao x bị ghi đè?
// function testScope() {
//     var x = 1;
//     let y = 2;
//     const z = 3;
//     if(true) {
//         var x = 10; // Ghi đè
//         let y = 20; // Block scope, không ghi đè
//         const z = 30; // Block scope, không ghi đè
//         console.log(x, y, z);
//     }
//     console.log(x, y, z);
// }

// testScope();

// Kết quả sẽ là:
// 10 20 30
// 10 2 3
// Giải thích: Biến x được giải phóng sau khối if vì nó là biến var, có phạm vi toàn cục hoặc hàm. 
// Biến y và z được khai báo bằng let và const, nên chúng có phạm vi block và không bị ghi đè trong khối if. 
// Do đó, giá trị của y và z bên ngoài khối if vẫn giữ nguyên.

// Biến x bị ghi đè trong khối if vì nó được khai báo bằng var, có phạm vi toàn cục hoặc hàm, nên khi gán lại giá trị mới, nó sẽ ghi đè giá trị cũ. 
// Biến y và z không bị ghi đè vì chúng được khai báo bằng let và const, có phạm vi block.

/////////////////////////////////////////////////////////////////////////////////////////////////
// Câu hỏi 
// 1. Sự khác biệt giữa việc lưu biến nguyên thủy và biến object trong bộ nhớ là gì?
// 2. Tại sao const với object vẫn cho phép thay đổi thuộc tính, nhưng không cho gán lại object mới?
// 3. let và const giúp tiết kiệm bộ nhớ hơn var như thế nào?
// 3. Garbage Collector hoạt động ra sao khi bạn gán null cho một biến object?

/////////////////////////////////////////////////////////////////////////////////////////////////
// Câu trả lời
// 1. Sự khác biệt giữa việc lưu biến nguyên thủy và biến object trong bộ nhớ là:
// - Biến nguyên thủy (primitive) được lưu trong Stack, còn biến object được lưu trong
// Heap. Khi bạn gán lại biến, nó sẽ chỉ thay đổi tham chiếu trong Stack, trong khi nội dung của object vẫn giữ nguyên trong Heap.
// - Biến nguyên thủy có giá trị cố định, trong khi biến object có thể thay đổi nội dung mà không cần phải gán lại toàn bộ object.
// - Biến nguyên thủy có thể được gán lại giá trị mới, trong khi biến object 
// có thể thay đổi thuộc tính nhưng không thể gán lại toàn bộ object nếu được khai báo bằng const.

//////////////////////////////////////////////////////////////////////////////////////////////////
// Tại sao const với object vẫn cho phép thay đổi thuộc tính, nhưng không cho gán lại object mới?
// - Const bảo vệ tham chiếu đến object, không phải nội dung bên trong. Bạn có thể thay đổi thuộc tính của object vì bạn không thay đổi tham chiếu đến object đó.
// - Khi bạn gán lại object mới, bạn đang cố gắng thay đổi tham chiếu của hằng số (constant), điều này không được phép trong JavaScript.

//////////////////////////////////////////////////////////////////////////////////////////////////
// let và const giúp tiết kiệm bộ nhớ hơn var như thế nào?
// - Let và const có phạm vi block, giúp giảm thiểu việc sử dụng bộ nhớ không cần thiết
// - Var có phạm vi toàn cục hoặc hàm, có thể dẫn đến việc sử dụng bộ nhớ không cần thiết
// - Let và const giúp tránh xung đột tên biến trong phạm vi toàn cục hoặc hàm, từ đó tiết kiệm bộ nhớ

/////////////////////////////////////////////////////////////////////////////////////////////////
// Garbage Collector hoạt động ra sao khi bạn gán null cho một biến object?
// - Khi bạn gán null cho một biến object, Garbage Collector sẽ đánh dấu vùng nhớ mà biến đó tham chiếu đến là có thể thu hồi.
// - Nếu không còn biến nào tham chiếu đến object đó, Garbage Collector sẽ giải phóng vùng nhớ để sử dụng cho các đối tượng khác trong tương lai.
// - Điều này giúp quản lý bộ nhớ hiệu quả hơn, tránh rò rỉ bộ nhớ khi không còn sử dụng object nữa.
// - Garbage Collector sẽ tự động chạy để thu hồi bộ nhớ không còn sử dụng, giúp giảm thiểu việc sử dụng bộ nhớ không cần thiết.

