const classroom = {
    name: "Class 23SE",
    students: []
};

const addStudent = (id, name, score) => {
    classroom.students.push({ id, name, score });
};

const getAverageScore = () =>  {
    if(classroom.students.length === 0) {
        return 0;
    }
    return classroom.students.reduce((total, student) => total + student.score, 0) / classroom.students.length;
};

const displayStudents = () => {
    console.log(`Classroom: ${classroom.name}`);
    console.log("Students List:");
    classroom.students.forEach(student => {
        console.log(`ID: ${student.id}, Name: ${student.name}, Score: ${student.score}`);
    });
    console.log(`Average Score: ${getAverageScore()}`);
};

addStudent(1, "Tuan", 8.5);
addStudent(2, "Nam", 9.0);
addStudent(3, "An", 7.5);
displayStudents();