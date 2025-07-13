#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 50

typedef struct {
    char ten[50];
    char maSo[20];
    float diemTB;
} SinhVien;

// Câu 1
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int timGiaTriLonThuHai(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < max) {
            return a[i];
        }
    }
    return -1;
}

void cau1() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int a[n];
    nhapMang(a, n);

    sapXepGiamDan(a, n);

    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int lonThuHai = timGiaTriLonThuHai(a, n);
    if (lonThuHai != -1) {
        printf("Gia tri lon thu hai trong mang la: %d\n", lonThuHai);
    } else {
        printf("Khong ton tai gia tri lon thu hai.\n");
    }
}

// Câu 2
int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void cau2() {
    int x, y;
    printf("Nhap hai so nguyen(a b): ");
    scanf("%d%d", &x, &y);

    int ucln = UCLN(x, y);
    printf("UCLN cua %d va %d la: %d\n", x, y, ucln);
}

// Câu 3
void demVaTinhTongChuSo(char s[], int *dem, int *tong) {
    *dem = 0;
    *tong = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            (*dem)++;
            *tong += s[i] - '0';
        }
    }
}

void cau3() {
    char s[100];
    getchar(); // Xóa bộ đệm
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    int dem, tong;
    demVaTinhTongChuSo(s, &dem, &tong);

    printf("So luong chu so trong chuoi: %d\n", dem);
    printf("Tong gia tri cac chu so: %d\n", tong);
}

// Câu 4
int tongChuSo(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + tongChuSo(n / 10);
}

void cau4() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So nhap vao phai la so nguyen duong!\n");
    } else {
        int tong = tongChuSo(n);
        printf("Tong cac chu so cua %d la: %d\n", n, tong);
    }
}

// Câu 5
void nhapDanhSach(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        getchar();
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);

        printf("Ma so: ");
        fgets(ds[i].maSo, sizeof(ds[i].maSo), stdin);

        printf("Diem trung binh: ");
        scanf("%f", &ds[i].diemTB);
    }
}

void ghiFile(SinhVien ds[], int n) {
    FILE *f = fopen("sinhvien.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(f, "%s%s%.2f\n", ds[i].ten, ds[i].maSo, ds[i].diemTB);
    }

    fclose(f);
}

void docVaInDanhSach() {
    FILE *f = fopen("sinhvien.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file de doc!\n");
        return;
    }

    SinhVien sv;
    while (fgets(sv.ten, sizeof(sv.ten), f) != NULL) {
        fgets(sv.maSo, sizeof(sv.maSo), f);
        fscanf(f, "%f\n", &sv.diemTB);

        if (sv.diemTB >= 5.0) {
            printf("Ten: %s", sv.ten);
            printf("Ma so: %s", sv.maSo);
            printf("Diem trung binh: %.2f\n", sv.diemTB);
            printf("--------------------------\n");
        }
    }

    fclose(f);
}

void cau5() {
    SinhVien ds[MAX];
    int n;
    printf("Nhap so luong sinh vien (n <= 50): ");
    scanf("%d", &n);

    if (n <= 0 || n > 50) {
        printf("So luong khong hop le!\n");
        return;
    }

    nhapDanhSach(ds, n);
    ghiFile(ds, n);

    printf("\nDanh sach sinh vien co diem trung binh >= 5.0:\n");
    docVaInDanhSach();
}

// MAIN MENU
int main() {
    int luaChon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Cau 1\n");
        printf("2. Cau 2\n");
        printf("3. Cau 3\n");
        printf("4. Cau 4\n");
        printf("5. Cau 5\n");
        printf("0. Thoat\n");
        printf("==========================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch(luaChon) {
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
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }

    } while (luaChon != 0);

    return 0;
}
