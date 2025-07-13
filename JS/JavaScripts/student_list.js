const displayStudents = () => {
    const maxStudents = 100;
    let studentCount = 0;
    const students = [];

    for(let i = 0; i < 5; i++) {
        students.push({ id: i, name: `Student ${i}` });
        studentCount++;
    }

    console.log("Total Students: ", studentCount);
    console.log("Students List: ", students);
    console.log("Max Students: ", maxStudents);
}

displayStudents();