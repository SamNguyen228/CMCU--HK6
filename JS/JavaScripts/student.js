const MAX_SCORE = 10;
const studentName = "Tuan";
let averageScore = 8.5;

console.log("Student Name: " + studentName);
console.log("Average Score: " + averageScore);
console.log("Max Score: " + MAX_SCORE);

// Update average score
averageScore = 9.0;
console.log("Updated Average Score: " + averageScore);

// MAX_SCORE = 12; // This will throw an error because MAX_SCORE is a constant
// studentName = "Nam"; // This will throw an error because studentName is a constant

const student = {name: studentName, score: averageScore};
student.score = 9.5; // This is allowed because we are modifying a property of the object
console.log("Student Information: ", student);