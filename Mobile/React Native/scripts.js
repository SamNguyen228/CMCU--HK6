// // console.log(x); // undefined

// // if(true) { 
// //     var x = 10;
// //     x = 20;
// // }

// // console.log(x); // 10

// // // Hoisting
// // // Hoisting is a JavaScript mechanism where variables and function declarations are moved to the top of their scope during the compile phase.
// // // This means that you can use variables and functions before they are declared in the code.
// // // However, only the declarations are hoisted, not the initializations.
// // // For example:
// // console.log(y); // undefined
// // var y = 5;
// // console.log(y); // 5
// // // In the above example, the variable y is hoisted to the top of its scope, but its value is not assigned until the line var y = 5; is executed.


// // if(true){
// //     let z = 10;
// //     console.log(z); 
// // }

// // // console.log(z); // ReferenceError: z is not defined
// // sayGreeting();
// // function sayGreeting() {
// //     console.log("Hello, World!");
// // }

// // sayGoodbye(); // TypeError: sayGoodbye is not a function
// // console.log(sayGoodbye); // Error: sayGoodbye is not defined
// // const sayGoodbye = function() {
// //     console.log("Goodbye, World!");
// // }
// // sayGoodbye();

// const multiply = (a, b = 10) => {
//     console.log(b);
//     return a * b;
// }

// console.log(multiply(2)); 
// console.log(multiply(5, 8)); 

// function square(x) {
//     console.log(x * x * arguments[1]);
// }

// square(6, 7, 8)

// let number = 5;
// square(number);

// const person = {
//     name: "Alice"
// };

// function greet(human) {
//     console.log("Hello, " + human.name);
//     human = { name: "Charlie" }; // This does not change the original object
//     human.name = "Bob";
// }
// greet(person);
// console.log("Updated name:", person.name); // "Bob"

// function sum(x, ...arr) { // Using rest parameter to accept any number of arguments
//     let total = 0;
//     for (let i = 0; i < arr.length; i++) {
//         total += arr[i];
//     }
//     return total;
// }
// let arr1 = [1, 2, 3];
// sum(arr1); // 6
// console.log(sum(1, 2, 3));
// console.log(sum(1, 2, 3, 4, 5));
// console.log(sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

// function outer() {
//     let outerVar = "I am outside!";
    
//     return function inner() {
//         console.log(outerVar); // Accessing outer variable
//     }
//     // inner(); // Call inner function
// }

// outer();

// const f = outer();
// f();

// console.log(multiply.name);

// (function print() {
//     console.log("Function name:", print.name);
// })();

// // Tính giai thừa
// function factorial(n) {
//     if (n == 0) return 1;
//     else return n * factorial(n - 1);
// }

let xe1 = "Toyota";
let xe2 = "Mercedes";
let xe3 = "Hyndai";

const arr = ["Toyota", "Mercedes", "Hyndai"];
const arr2 = [
    "Toyota",
    "Mercedes",
    "Hyndai"
];

const arr3 = [];
arr3[0] = "Toyota";
arr3[1] = "Mercedes";
arr3[2] = "Hyndai";

const arr4 = new Array("Toyota", "Mersedes", "Hyndai");
const arr5 = [3, 6, 7, 8, 9];
const arr6 = new Array(3, 6);
// console.log(arr5);
// console.log(arr6);
// console.log(arr4[1]);
// arr4[1] = "Vinfast";
// console.log(arr4.toString());
// arr4.toString();
// console.log(arr4.length);
// console.log(arr4.at(1));
// console.log(arr4[1]);
// console.log(arr4[arr4.length - 1]);
// console.log(arr4.at(arr4.length - 1));
// console.log(arr4.at(-1));
// console.log(arr4[-1]);
// arr4.push("Honda");
// console.log(arr4);
// console.log(arr4.push("Kia"));
// console.log(arr4);
// arr4[arr4.length] = "Mitsubishi";
// console.log(arr4);
// console.log(arr4.pop());
// console.log(arr4);
// console.log(arr4.shift());
// console.log(arr4);
// console.log(arr4.unshift("Toyota"));
// console.log(arr4);
// console.log(arr4.unshift("Mitsubishi", "Rollroy"));
// console.log(arr4);
// arr4.shift();

// for(i = 0; i < arr4.length; i++) {
//     console.log(arr4[i]);
// }

// for (const x of arr4) {
//     console.log(x);
// }

// const arr7 = [];
// arr7[100] = "Toyota";
// console.log(arr7.length);

// const arr8 = [1, 2, 3, 4, 5];
// arr8.length = 2;
// console.log(arr8);
// arr8.length = 5;
// console.log(arr8[3]);
// let matrix = [
//     [1, 5, 8],
//     [2, 7, 0],
//     [3, 9, 1]
// ];
// console.log(matrix[0] [1]);

// let arr10 = [6];
// let arr11 = [6];
// console.log(arr10 == arr11);
// arr11[0] = 8;
// console.log(arr10);
// console.log([] == []);
// console.log([6] == [6]);
// console.log(0 == []);
// console.log('0' == []);
// console.log('' == []);
// console.log('' == 0);

// const hangXe = new Array("Toyota", "Mersedes", "Hyndai");
// hangXe.splice(1, 1);
// console.log(hangXe);
// hangXe.splice(1, 2);
// console.log(hangXe);
// let str = ["Hello", "World", "Tôi", "Đang", "Học", "Lập", "Trình", "Chương", "Trình", "Phát", "Triển", "Ứng", "Dụng", "Di", "Động"];
// let str1 = str.splice(2, 0, "Xin", "Chào", "Tôi", "Là", "Một", "Sinh", "Viên", "IT");
// console.log(str1);
// console.log(str);

// let str2 = str.splice(-8, 8, "Mobile");
// console.log(str);

// console.log(str.slice(-5));
// console.log(str.slice());
// nums.concat([6, 7]);
// console.log(nums.concat([6, 7]));
// console.log(nums.concat([6, 7], [8, 9]));
// console.log(nums.concat([6, 7], 8, 9));
// console.log(nums.concat([9, 10], ["Hello", "World"]));
// nums[1] = "Meow";
// console.log(nums);
let nums = [1, 2, 3, 4, 5];

// nums.forEach(function(phantu, chiso, mang){
//     console.log(phantu);
//     console.log(chiso);
// })

// console.log(nums.indexOf(1));
// nums[3] = NaN;
// console.log(nums.indexOf(NaN)); // -1
// console.log(nums.includes(NaN, 2));
// nums[3] = 2;
// console.log(nums);
// console.log(nums.indexOf(2));
// console.log(nums.lastIndexOf(2));
// let ketqua = nums.find(function(item, index, arr){
//     return item > 2;
// })

// console.log(ketqua);

// let ketqua = nums.findIndex(function(item, index, arr){
//     return item > 2;
// })

// console.log(ketqua);

// let ketqua = nums.findLastIndex(function(item, index, arr){
//     return item > 2;
// })

// console.log(ketqua);

// let ketqua = nums.filter(function(item, index, arr){
//     return item > 2;
// })

// console.log(ketqua);

// let ketqua = nums.map(function(item, index, arr){
//     return item > 2;
// })

// console.log(ketqua);
// nums[0] = 7;
// let ketqua = nums.sort();
// ketqua[2] = 8;
// console.log(nums);
// console.log(ketqua);
// ketqua = [3, 7, 9, 10, 4];
// console.log(nums);
// console.log(ketqua);
// nums[2] = 15;
// nums.sort();
// console.log(nums);
// console.log('15' < '2');
// function compare(a, b) {
//     if(a > b) return 1;
//     if(a == b) return 0;
//     if(a < b) return -1;
// }

// nums.sort(compare);
// console.log(nums);
// let result = compare(8, 5);
// console.log(result);

// function compare1(a, b) {
//     return a - b;
// }

// (a, b) => a - b;
// nums.sort((a, b) => b - a);
// console.log(nums);

// let str = 'Hello, Im from VietNam, I learn IT';
// let ketqua1 = str.split(',');
// console.log(ketqua1);
// let ketqua2 = ketqua1.join('_')
// console.log(ketqua2);
// console.log(nums);
// let ketqua3 = nums.reduce(function(sum ,value, index, arr){
//     return sum + value;
// }, 0);
// console.log(ketqua3);

// let ketqua4 = nums.reduce(function(sum ,value, index, arr){
//     return sum + value;
// });
// console.log(ketqua4);
// console.log(typeof(nums));
// let user = {
//     name: 'Nguyen Van A',
//     age: 25,
// }
// console.log(typeof(user));
// console.log(Array.isArray(user));

// console.log('Bat Dau');
// function dongBo() {
//     console.log('Dong Bo');
// }
// dongBo();
// console.log('Ket Thuc');

// console.log('Bat Dau');
// function dongBo() {
//     setTimeout(() => {
//         console.log('Dong Bo');
//     }, 3000)
// }
// dongBo();
// console.log('Ket Thuc');

// function hamChinh(callBack) {
//     console.log('Thuc hien ham chinh');
//     data = {
//         name: 'Nguyen Van A',
//         age: 20
//     };
//     setTimeout(() => {
//         callBack(null, data);
//     }, 3000)
//     console.log('Hello, World');
// }

// function hamTruyVan(error, result) {
//     if(error) return console.log('Lay du lieu that bai');
//     console.log('Ket qua la: ' + result.name);
//     console.log('Ket qua la: ' + result.age);
//     console.log('Ket qua la: ' + result);
//     function hamTruyVan2(error, result) {
//         if(error) return console.log('Lay du lieu that bai');
//         console.log('Ket qua la: ' + result.name);
//         console.log('Ket qua la: ' + result.age);
//         console.log('Ket qua la: ' + result);
//     }
// }
// hamChinh(hamTruyVan);
// data = [
//     {
//     name: 'Nguyen Van A',
//     age: 20
//     }, 
//     {
//     name: 'Nguyen Van B',
//     age: 25
//     }
// ]
// let data1 = {
//     name: 'Nguyen Duong Sam',
//     age: 30,
//     class: 'IT6'
// }
// console.log('Infomation: ' + data1);
// // console.log(data);

// function getUser(callBack) {
//     setTimeout(() => {
//         callBack(null, {name: 'Nam', age: 20});
//     }, 2000);
// }

// function getPost(id, callBack) {
//     setTimeout(() => {
//         callBack(null, {date: '2020-01-01', content: 'Hello, World'});
//     }, 2000);
// }

// function getComment(id, callBack) {
//     setTimeout(() => {
//         callBack(null, {text: 'Comment 1', date: '2020-01-01'});
//     }, 2000);
// }

// getUser(function (error, data) {
//     if(error) {
//         console.log('Lay du lieu user that bai');
//         return;
//     }
//     getPost(data, function(error, post) {
//         if(error) {
//             console.log('Lay du lieu bai viet that bai');
//             return;
//         }
//         getComment(post, function(error, comment) {
//             if(error) {
//                 console.log('Lay du lieu binh luan that bai');
//                 return;
//             }
//             console.log(data.name + post.content + comment.text);
//         })
//     })
// });

let myPromise = new Promise((resolve, reject) => {
    // Thực hiện task bất đồng bộ ở đây
    // Nếu thành công, thì gọi resolve
    // CÒn thất bại thì gọi reject
    
})

myPromise.then() // Xử lí khi promise thành công 
.catch() // Xử lí khi thất bại
.finally() // Xử lí khi promise kết thúc

async function getUser() {
    let myPromise = new Promise((resolve, reject) => {
        let data = {name: 'Nam', age: 20};
        setTimeout(() => {
            resolve(data);
        }, 2000);
    })
    return myPromise;
}

function getPost(user) {
    return new Promise((resolve, reject) => {
        let data = {date: '2020-01-01', content: 'Post 1'};
        setTimeout(() => {
            resolve(data, user);
        }, 3000);
    })
}

function getComment(post) {
    return new Promise((resolve, reject) => {
        let data = {text: 'Comment 1'};
        setTimeout(() => {
            resolve(data, post);
        }, 5000);
    })
}

// getUser().then(function (data) {
//     getPost(data)
//     .then(function(result) {
//         console.log(result.date + ',' + result.content);
//         console.log(data.name + ',' + data.age);
//     })
//     .catch(function() {
//         console.log('Loi khi fetch du lieu');
//     })
// })
// getPost().then(function(data) {
//     console.log(data.date);
// })
// getUser().then(function(data) {
//     console.log(data.name + ',' + data.age);
//     return getPost(data);
// }).then(function(data) {
//     console.log(data.date + ',' + data.content);
//     return getComment(data);
// }).then(function(data) {
//     console.log(data.text);
// })

// getUser().then((data) => {
//     console.log(data.name + ', ' + data.age);
//     return getPost(data);
// }).then((data) => {
//     console.log(data.date + ', ' + data.content);
//     return getComment(data);
// }).then((data) => {
//     console.log(data.text);
// })
// let promise1 = new Promise((resolve) => resolve('Hello, world!'))
// let promise2 = new Promise((resolve, reject) => reject('Error!'))
// let promise3 = new Promise((resolve) => resolve('Hello, world3!'))

// Promise.allSettled([promise1, promise2, promise3])
// .then((result) => {
//     console.log(result);
// })
// .catch((error) => {
//     console.log('Loi du lieu ' + error);
// })
// let user = getUser();
// let post = getPost(user);
// let comment = getComment(post);
// Promise.race([user, post, comment])
// .then((ketqua) => {
//     console.log(ketqua);
// })

async function fetchData() {
    try {
        console.log('Start');
        let ketqua = await getUser();
        let ketqua2 = await getPost(ketqua);
        let ketqua3 = await getComment(ketqua2);
        console.log(ketqua);
        console.log(ketqua2);
        console.log(ketqua3);
        // let result = await Promise.all([ketqua, ketqua2, ketqua3])
        // console.log(result);
        console.log('Ket thuc');
        return ketqua;
    } catch(e) {
        console.log('Loi du lieu ' + e);
    }
}
fetchData();

