// Bài 1: Thao tác với Array 
// Tạo array scores = [7, 8, 9, 6, 10].
// Dùng push thêm điểm 8.5.
// Dùng filter để lấy các điểm >= 8.
// Dùng map để tăng mỗi điểm lên 1.
// Dùng reduce để tính tổng điểm.
// In kết quả sau mỗi bước.

// let scores = [7, 8, 9, 6, 10];
// console.log("Initial Scores: ", scores);
// scores.push(8.5);
// console.log("Scores after push: ", scores);
// let highScore = scores.filter(score => score >= 8);
// console.log("Scores after filter: ", highScore);
// let increaseScore = scores.map(score => score + 1);
// console.log("Scores after map: ", increaseScore);
// let totalScore = scores.reduce((total, score) => total + score, 0);
// console.log("Scores after reduce: ", totalScore);

// Bài 2: Thao tác với Object 
// Tạo object user = { name: "Tuan", age: 20, city: "Hanoi" }.
// Thêm thuộc tính email: "tuan@example.com".
// Sửa city thành "Saigon".
// Xóa age.
// Dùng Object.keys để in danh sách các key.
// In object sau mỗi bước.

// const user = {
//     name: "Tuan",
//     age: 20,
//     city: "Hanoi"
// };

// console.log("User Information: ", user);
// // Thêm thuộc tính email: "tuan@example.com".
// user.email = "tuan@example.com";
// console.log("User after adding email: ", user);
// user.city = "Saigon";
// console.log("User after changing city: ", user);
// // Dùng Object.keys để in danh sách các key.
// console.log("Keys of user: ", Object.keys(user));


const todoList = {
    name: "My Todo List",
    tasks: []
};

const addTask = (task) => {
    todoList.tasks.push(task);
    console.log(`Task "${task}" added to the list.`);
}

const getPendingTasks = function() {
    return todoList.tasks.filter(task => !task.completed);
}

const displayTasks = () => {
    console.log("Tasks in the Todo List:");
    todoList.tasks.forEach((task, index) => {
        console.log(`${index + 1}. ${task.name} - ${task.completed ? "Completed" : "Uncompleted"}`);
    });
}

todoList.tasks.push({ name: "Buy Food", completed: false });
todoList.tasks.push({ name: "Go to School", completed: false });
todoList.tasks.push({ name: "Play Game", completed: false });
todoList.tasks[0].completed = true; // Đánh dấu công việc đầu tiên là hoàn thành
displayTasks();

