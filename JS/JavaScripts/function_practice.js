function caculateSquare(number) {
    return number * number;
}

console.log(caculateSquare(5));

const sayGreeting = function(name) {
    return "Hello, " + name;
}

console.log(sayGreeting("Tuan"));

const isEven = (number) => {
    return number % 2 === 0;
}   

console.log(isEven(4));

function updateUser(users, age) {
    users.age = age;
}

const user = {
    name: "Tuan",
    age: 20
}

console.log("User Info:", user);
updateUser(user, 25);
console.log("User Info after update:", user);

let scores = [];

function addScore(score){
    scores.push(score);
}

const averageScore = (scores) => {
    let total = 0;
    for (let i = 0; i < scores.length; i++) {
        total += scores[i];
    }
    return total / scores.length;
}

const displayScore = function(scores) {
    console.log("Scores:", scores);
}

addScore(8);
addScore(9);
addScore(7);

console.log("Average Score: ", averageScore(scores));
displayScore(scores);

///////////////////////////////////////////////////////////////////////
// Câu hỏi 
// 1. Sự khác biệt giữa function declaration và arrow function là gì? Khi nào nên dùng arrow function?
// 2. Tại sao tham số object trong hàm có thể bị thay đổi, nhưng tham số số thì không?
// 3. Hàm được lưu ở đâu trong bộ nhớ (Stack/Heap)? Tham số được cấp phát như thế nào?

