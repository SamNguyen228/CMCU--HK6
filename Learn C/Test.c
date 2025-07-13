#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[50];
    int maSo;
} SanPham;

// Hàm tính tổng 2 số nguyên
int tong(int a, int b) {
    return a + b;
}

// Hàm nhập chuỗi tối đa 100 ký tự
void nhapChuoi(char str[]) {
    printf("Nhap chuoi (toi da 100 ky tu): ");
    getchar(); // Xóa ký tự Enter còn lại
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; // Xóa newline nếu có
}

// Hàm tính giai thừa bằng đệ quy
int giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giaithua(n - 1);
    }
}
// Câu 11: Làm việc với mảng số nguyên
void cau1() {
    int n, arr[50];
    printf("Nhap so luong phan tu (n <= 50): ");
    scanf("%d", &n);
    if (n <= 0 || n > 50) {
        printf("So luong phan tu khong hop le.\n");
        return;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Tính tổng các phần tử chẵn
    int sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        }
    }
    printf("Tong cac phan tu chan: %d\n", sumEven);

    // In ra các phần tử lớn hơn 5
    printf("Cac phan tu lon hon 5: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] > 5) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Câu 2: Tính tổng hai số
void cau2() {
    int a, b;
    printf("Nhap hai so a va b: ");
    scanf("%d%d", &a, &b);
    int result = tong(a, b);
    printf("Tong hai so a va b: %d\n", result);
}

// Câu 3: Làm việc với chuỗi
void cau3() {
    char str[100];
    nhapChuoi(str);

    int countLetters = 0, countDigits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            countLetters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            countDigits++;
        }
    }

    printf("So ky tu chu cai: %d\n", countLetters);
    printf("So ky tu so: %d\n", countDigits);
}

// Câu 4: Tính giai thừa
void cau4() {
    int n;
    printf("Nhap so nguyen duong n (0 <= n <= 10): ");
    scanf("%d", &n);
    if (n < 0 || n > 10) {
        printf("So khong hop le.\n");
        return;
    }
    int factorial = giaithua(n);
    printf("Giai thua cua %d la: %d\n", n, factorial);
}

// Câu 5: Làm việc với danh sách sản phẩm và file
void cau5() {
    SanPham sanPham[30];
    int nSanPham;
    printf("Nhap so luong san pham (n <= 30): ");
    scanf("%d", &nSanPham);
    if (nSanPham <= 0 || nSanPham > 30) {
        printf("So luong san pham khong hop le.\n");
        return;
    }
    getchar(); // Xóa Enter

    for (int i = 0; i < nSanPham; i++) {
        printf("Nhap ten san pham %d: ", i + 1);
        fgets(sanPham[i].ten, sizeof(sanPham[i].ten), stdin);
        sanPham[i].ten[strcspn(sanPham[i].ten, "\n")] = 0;
        printf("Nhap ma so san pham %d: ", i + 1);
        scanf("%d", &sanPham[i].maSo);
        getchar(); // Xóa Enter
    }

    // Ghi vào tệp
    FILE *file = fopen("danhsach.txt", "w");
    if (file == NULL) {
        printf("Khong the mo tep de ghi.\n");
        return;
    }
    for (int i = 0; i < nSanPham; i++) {
        fprintf(file, "San pham %d: Ten: %s, Ma so: %d\n", i + 1, sanPham[i].ten, sanPham[i].maSo);
    }
    fclose(file);
    printf("Da ghi danh sach vao tep danhsach.txt\n");

    // Đọc từ tệp
    file = fopen("danhsach.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep de doc.\n");
        return;
    }
    printf("Danh sach san pham:\n");
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

// Hàm in Menu
void menu() {
    printf("\n========== MENU ==========\n");
    printf("1. Cau 1\n");
    printf("2. Cau 2\n");
    printf("3. Cau 3\n");
    printf("4. Cau 4\n");
    printf("5. Cau 5\n");
    printf("0. Thoat\n");
    printf("==========================\n");
}

int main() {
    int choice;
    do {
        menu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                cau1();
                break;
            case 2:
                cau2();
                break;
            case 3:
                cau3();
                break;
            case 4:
                cau4();
                break;
            case 5:
                cau5();
                break;
            case 0:
                printf("Dang thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long nhap lai!\n");
        }
    } while (choice != 0);

    return 0;
}
