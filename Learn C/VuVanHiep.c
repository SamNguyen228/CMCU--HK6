#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SACH 100

typedef struct {
    int id;
    char tenSach[100];
    char tacGia[100];
    char theLoai[50];
    float gia;
} Sach;

Sach danhSachSach[MAX_SACH];
int soLuongSach = 0;

int kiemTraID(int id) {
    for (int i = 0; i < soLuongSach; i++) {
        if (danhSachSach[i].id == id) {
            return 1;
        }
    }
    return 0;
}

void themSach() {
    if (soLuongSach >= MAX_SACH) {
        printf("Danh sach sach da day!\n");
        return;
    }

    Sach sachMoi;
    do {
        printf("Nhap ID sach: ");
        scanf("%d", &sachMoi.id);
        if (kiemTraID(sachMoi.id)) {
            printf("Ma sach da ton tai! Vui long nhap lai.\n");
        }
    } while (kiemTraID(sachMoi.id));

    printf("Nhap ten sach: ");
    scanf(" %[^\n]", sachMoi.tenSach);
    printf("Nhap tac gia: ");
    scanf(" %[^\n]", sachMoi.tacGia);
    printf("Nhap the loai: ");
    scanf(" %[^\n]", sachMoi.theLoai);
    printf("Nhap gia sach: ");
    scanf("%f", &sachMoi.gia);

    danhSachSach[soLuongSach++] = sachMoi;
    printf("Them sach thanh cong!\n");
}

void themNhieuSach() {
    int chon;
    do {
        themSach();
        printf("Nhan 0 de thoat hoac bat ky phim nao de tiep tuc them: ");
        scanf("%d", &chon);
    } while (chon != 0);
}

void hienThiSach() {
    if (soLuongSach == 0) {
        printf("Khong co sach nao trong he thong.\n");
        return;
    }

    printf("\nDanh sach sach trong he thong:\n");
    for (int i = 0; i < soLuongSach; i++) {
        printf("ID: %d\n Ten: %s\n Tac gia: %s\n The loai: %s\n Gia: %.2f\n\n",
               danhSachSach[i].id, danhSachSach[i].tenSach,
               danhSachSach[i].tacGia, danhSachSach[i].theLoai, danhSachSach[i].gia);
    }
}

void capNhatSach() {
    int id;
    printf("Nhap ID sach can cap nhat: ");
    scanf("%d", &id);

    for (int i = 0; i < soLuongSach; i++) {
        if (danhSachSach[i].id == id) {
            printf("Nhap ten moi: ");
            scanf(" %[^\n]", danhSachSach[i].tenSach);
            printf("Nhap tac gia moi: ");
            scanf(" %[^\n]", danhSachSach[i].tacGia);
            printf("Nhap the loai moi: ");
            scanf(" %[^\n]", danhSachSach[i].theLoai);
            printf("Nhap gia moi: ");
            scanf("%f", &danhSachSach[i].gia);
            printf("Cap nhat thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sach voi ID nay!\n");
}

void xoaSachTheoID() {
    int id;
    printf("Nhap ID sach can xoa: ");
    scanf("%d", &id);

    for (int i = 0; i < soLuongSach; i++) {
        if (danhSachSach[i].id == id) {
            for (int j = i; j < soLuongSach - 1; j++) {
                danhSachSach[j] = danhSachSach[j + 1];
            }
            soLuongSach--;
            printf("Xoa sach thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sach voi ID nay!\n");
}

void xoaSachTheoTen() {
    char ten[100];
    printf("Nhap ten sach can xoa: ");
    scanf(" %[^\n]", ten);

    for (int i = 0; i < soLuongSach; i++) {
        if (strcmp(danhSachSach[i].tenSach, ten) == 0) {
            for (int j = i; j < soLuongSach - 1; j++) {
                danhSachSach[j] = danhSachSach[j + 1];
            }
            soLuongSach--;
            printf("Xoa sach thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sach voi ten nay!\n");
}

void timKiemChinhXac() {
    char ten[100];
    printf("Nhap ten sach can tim: ");
    scanf(" %[^\n]", ten);

    for (int i = 0; i < soLuongSach; i++) {
        if (strcmp(danhSachSach[i].tenSach, ten) == 0) {
            printf("Tim thay sach - ID: %d, Ten: %s, Tac gia: %s, The loai: %s, Gia: %.2f\n",
                   danhSachSach[i].id, danhSachSach[i].tenSach,
                   danhSachSach[i].tacGia, danhSachSach[i].theLoai, danhSachSach[i].gia);
            return;
        }
    }
    printf("Khong tim thay sach.\n");
}

void timKiemGanDung() {
    char ten[100];
    printf("Nhap tu khoa can tim: ");
    scanf(" %[^\n]", ten);

    int found = 0;
    for (int i = 0; i < soLuongSach; i++) {
        if (strstr(danhSachSach[i].tenSach, ten) != NULL) {
            printf("ID: %d, Ten: %s, Tac gia: %s, The loai: %s, Gia: %.2f\n",
                   danhSachSach[i].id, danhSachSach[i].tenSach,
                   danhSachSach[i].tacGia, danhSachSach[i].theLoai, danhSachSach[i].gia);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sach phu hop.\n");
    }
}

void menu() {
    int chon;
    do {
        printf("\n====== QUAN LY SACH ======\n");
        printf("1. Them mot dau sach\n");
        printf("2. Them nhieu dau sach\n");
        printf("3. Hien thi danh sach sach\n");
        printf("4. Cap nhat thong tin sach\n");
        printf("5. Xoa sach theo ID\n");
        printf("6. Xoa sach theo ten\n");
        printf("7. Tim kiem chinh xac theo ten\n");
        printf("8. Tim kiem gan dung theo ten\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: themSach(); break;
            case 2: themNhieuSach(); break;
            case 3: hienThiSach(); break;
            case 4: capNhatSach(); break;
            case 5: xoaSachTheoID(); break;
            case 6: xoaSachTheoTen(); break;
            case 7: timKiemChinhXac(); break;
            case 8: timKiemGanDung(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le.\n");
        }
    } while (chon != 0);
}

int main() {
    menu();
    return 0;
}
