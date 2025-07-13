#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

// ====== Cau 1 ======
void cau1() {
    int n, i, j, temp;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // sap xep giam dan
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // tim gia tri lon thu 2
    int max1 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < max1) {
            printf("Gia tri lon thu 2 la: %d\n", a[i]);
            return;
        }
    }
    printf("Khong co gia tri lon thu 2.\n");
}

// ====== Cau 2 ======
int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void cau2() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("UCLN cua %d va %d la: %d\n", a, b, UCLN(a, b));
}

// ====== Cau 3 ======
void cau3() {
    char str[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);

    int count = 0, sum = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
            sum += str[i] - '0';
        }
    }
    printf("So luong chu so: %d\n", count);
    printf("Tong cac chu so: %d\n", sum);
}

// ====== Cau 4 ======
int tongChuSo(int n) {
    if (n == 0) return 0;
    return (n % 10) + tongChuSo(n / 10);
}

void cau4() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac chu so cua %d la: %d\n", n, tongChuSo(n));
}

// ====== Cau 5 ======
typedef struct {
    char ten[50];
    char maSo[20];
    float diemTB;
} SinhVien;

void cau5() {
    int n;
    SinhVien sv[MAX];
    FILE *f;

    printf("Nhap so luong sinh vien (<= 50): ");
    scanf("%d", &n);
    if (n > MAX) {
        printf("So luong vuot qua gioi han!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i+1);
        fflush(stdin);
        printf("Ten: ");
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = 0; // xoa ki tu \n cuoi chuoi
        printf("Ma so: ");
        fgets(sv[i].maSo, sizeof(sv[i].maSo), stdin);
        sv[i].maSo[strcspn(sv[i].maSo, "\n")] = 0;
        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTB);
    }

    // Ghi file
    f = fopen("sinhvien.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s,%s,%.2f\n", sv[i].ten, sv[i].maSo, sv[i].diemTB);
    }
    fclose(f);
// doc file va in sinh vien co diem trung binh >= 5.0
    printf("Danh sach sinh vien co diem trung binh >= 5.0:\n");
    f = fopen("sinhvien.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }
    while (fscanf(f, "%[^,],%[^,],%f\n", sv[0].ten, sv[0].maSo, &sv[0].diemTB) != EOF) {
        if (sv[0].diemTB >= 5.0) {
            printf("Ten: %s, Ma so: %s, Diem TB: %.2f\n", sv[0].ten, sv[0].maSo, sv[0].diemTB);
        }
    }
    fclose(f);
}

// ====== Cau 6 ======
int main() {
    int choice;
    do {
        printf("\n========== MENU ==========\n");
        printf("1. Cau 1\n");
        printf("2. Cau 2\n");
        printf("3. Cau 3\n");
        printf("4. Cau 4\n");
        printf("5. Cau 5\n");
        printf("0. Thoat\n");
        printf("==========================\n");
        printf("Nhap lua chon: ");
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
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 0);

    return 0;
}