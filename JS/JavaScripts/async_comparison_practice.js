const getDataWithCallback = (callback) => {
    setTimeout(() => {
        const data = { id: 1, name: 'Data' };
        callback(data);
    }, 1000);
}

const getDataWithPromise = () => {
    return new Promise((resolve) => {
        setTimeout(() => {
            const data = { id: 1, name: 'Data' };
            resolve(data);
        }, 1000);
    });
}

// Call both 2 functions
getDataWithCallback((data) => {
    console.log("Data from Callback:", data);
});

getDataWithPromise().then((data) => {
    if (data.id < 0) {
        throw new Error("Invalid ID");
    }
    console.log("Data from Promise:", data);
}).catch((error) => {
    console.error("Error:", error.message);
});

// Bài 2: Chuyển từ Promise sang Async/Await 
// Viết hàm fetchUserAndPosts(userId) dùng Promise: 
// Lấy thông tin người dùng ({ id, name }).
// Lấy danh sách bài viết ([{ id, title }]).
// Dùng .then() để xử lý tuần tự.
// Chuyển hàm trên thành fetchUserAndPostsAsync(userId) dùng Async/Await.
// Gọi cả hai hàm với userId=1, in kết quả. Nhận xét sự khác biệt.



