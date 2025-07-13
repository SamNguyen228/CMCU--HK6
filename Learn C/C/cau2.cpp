#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[50];
    int maso;
} SanPham;

// ==== Câu 1 ====
void cau1() {
    int n, a[50], i, tong = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) if (a[i] % 2 == 0) tong += a[i];
    printf("Tong cac phan tu chan: %d\n", tong);
    printf("Cac phan tu lon hon 5:\n");
    for (i = 0; i < n; i++) if (a[i] > 5) printf("%d ", a[i]);
    printf("\n");
}

// ==== Câu 2 ====
int tong(int a, int b) {
    return a + b;
}

void cau2() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Tong hai so: %d\n", tong(a, b));
}

// ==== Câu 3 ====
void cau3() {
    char s[101];
    int i, demchu = 0, demso = 0;
    scanf(" %[^\n]", s);
    for (i = 0; s[i]; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) demchu++;
        if (s[i] >= '0' && s[i] <= '9') demso++;
    }
    printf("So chu cai: %d\n", demchu);
    printf("So chu so: %d\n", demso);
}

// ==== Câu 4 ====
int giaithua(int n) {
    return n <= 1 ? 1 : n * giaithua(n - 1);
}

void cau4() {
    int n;
    scanf("%d", &n);
    printf("Giai thua: %d\n", giaithua(n));
}

// ==== Câu 5 ====
void cau5() {
    int n, i;
    SanPham a[30];
    FILE *f = fopen("danhsach.txt", "w");
    if (!f) {
        printf("Khong mo duoc file.\n");
        return;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %[^\n]%d", a[i].ten, &a[i].maso);
        fprintf(f, "%s %d\n", a[i].ten, a[i].maso);
    }
    fclose(f);
    // Doc lai file
    f = fopen("danhsach.txt", "r");
    if (!f) {
        printf("Khong mo duoc file.\n");
        return;
    }
    printf("Danh sach san pham:\n");
    while (fscanf(f, " %[^\n]%d", a[0].ten, &a[0].maso) != EOF) {
        printf("%s %d\n", a[0].ten, a[0].maso);
    }
    fclose(f);
}

// ==== Main Menu ====
int main() {
    int chon;
    do {
        printf("========= MENU =========\n");
        printf("1. Cau 1\n");
        printf("2. Cau 2\n");
        printf("3. Cau 3\n");
        printf("4. Cau 4\n");
        printf("5. Cau 5\n");
        printf("0. Thoat\n");
        printf("=========================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);
        
        switch (chon) {
            case 1: cau1(); break;
            case 2: cau2(); break;
            case 3: cau3(); break;
            case 4: cau4(); break;
            case 5: cau5(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le. Moi nhap lai!\n");
        }
    } while (chon != 0);
    
    return 0;
}
