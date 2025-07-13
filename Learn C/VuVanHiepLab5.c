#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

#define SIZE 3
#define NUM_NAMES 5
#define MAX_LEN 100
#define NUM_EMPLOYEES 5
#define MAX_NAME_LEN 100
#define MAX 10
#define MAX_TERMS 100

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0]; 
    *min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int countVowels(char str[]) {
    int count = 0;
    char vowels[] = "aeiouAEIOU"; 
    for (int i = 0; str[i] != '\0'; i++) { 
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

struct Student {
    char name[50];
    int age;
    float marks;
};

void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0; 
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }
}

int isPalindrome(const char str[]) {
    size_t left = 0;
    size_t right = strlen(str);
    
    if (right > 0) right--; 

    while (left < right) {
        if (str[left] != str[right])
            return 0; 
        left++;
        right--;
    }
    return 1; 
}

int findSecondLargest(int arr[], int size) {
    int max = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    return (secondMax == INT_MIN) ? -1 : secondMax;
}

void sortNames(char names[][MAX_LEN], int n) {
    char temp[MAX_LEN];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

typedef struct {
    char name[MAX_NAME_LEN];
    int id;
    float salary;
} Employee;

void inputEmployees(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin nhan vien %d:\n", i + 1);
        printf("Ho ten: ");
        getchar(); 
        fgets(employees[i].name, MAX_NAME_LEN, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; 
        
        printf("ID: ");
        scanf("%d", &employees[i].id);
        
        printf("Luong: ");
        scanf("%f", &employees[i].salary);
    }
}

void displayEmployees(Employee employees[], int n) {
    printf("\nDanh sach nhan vien:\n");
    for (int i = 0; i < n; i++) {
        printf("\nNhan vien %d:\n", i + 1);
        printf("Ho ten: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Luong: %.2f\n", employees[i].salary);
    }
}

bool isMagicSquare(int matrix[SIZE][SIZE]) {
    int sumRow, sumCol;
    int diagonal1 = 0, diagonal2 = 0;
    int targetSum = 0;
    for (int j = 0; j < SIZE; j++) {
        targetSum += matrix[0][j];
    }

    for (int i = 0; i < SIZE; i++) {
        sumRow = 0;
        for (int j = 0; j < SIZE; j++) {
            sumRow += matrix[i][j];
        }
        if (sumRow != targetSum) return false;
    }

    for (int j = 0; j < SIZE; j++) {
        sumCol = 0;
        for (int i = 0; i < SIZE; i++) {
            sumCol += matrix[i][j];
        }
        if (sumCol != targetSum) return false;
    }

    for (int i = 0; i < SIZE; i++) {
        diagonal1 += matrix[i][i];
    }
    
    for (int i = 0; i < SIZE; i++) {
        diagonal2 += matrix[i][SIZE - i - 1];
    }

    if (diagonal1 != targetSum || diagonal2 != targetSum) return false;
    return true;
}

void inputMatrix(int matrix[SIZE][SIZE]) {
    printf("Nhap ma tran 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int substringSearch(char str[], char sub[]) {
    int lenStr = (int)strlen(str);
    int lenSub = (int)strlen(sub);      

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int j;
        for (j = 0; j < lenSub; j++) {    
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == lenSub) {
            return i;
        }
    }
    return -1; 
}

struct SparseElement {
    int row, col, value;
};

void convertToSparse(int matrix[MAX][MAX], int rows, int cols, struct SparseElement sparse[], int *nonZeroCount) {
    int k = 0; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) { 
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }
    
    *nonZeroCount = k; 

    printf("\nDinh dang nen cua ma tran thua:\n");
    printf("Row\tCol\tValue\n");
    for (int i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", sparse[i].row, sparse[i].col, sparse[i].value);
    }
}

void caesarCipher(char str[], int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            str[i] = (char)(((ch - 'A' + shift) % 26) + 'A');
        }
        else if (ch >= 'a' && ch <= 'z') {
            str[i] = (char)(((ch - 'a' + shift) % 26) + 'a');
        }
    }
}

typedef struct {
    int coefficient;
    int exponent;
} Term;

void inputPolynomial(Term poly[], int *n) {
    printf("Nhap so luong hang tu: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("Nhap he so va so mu cua hang tu %d: ", i + 1);
        scanf("%d %d", &poly[i].coefficient, &poly[i].exponent);
    }
}

void displayPolynomial(Term poly[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d*x^%d", poly[i].coefficient, poly[i].exponent);
        if (i < n - 1) printf(" + ");
    }
    printf("\n");
}

int addPolynomials(Term poly1[], int n1, Term poly2[], int n2, Term result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (poly1[i].exponent > poly2[j].exponent) {
            result[k++] = poly1[i++];
        } else if (poly1[i].exponent < poly2[j].exponent) {
            result[k++] = poly2[j++];
        } else { 
            result[k].coefficient = poly1[i].coefficient + poly2[j].coefficient;
            result[k].exponent = poly1[i].exponent;
            i++; j++; k++;
        }
    }
    while (i < n1) result[k++] = poly1[i++];
    while (j < n2) result[k++] = poly2[j++];
    return k;
}

void countFunction(int count) {
    printf("\n===== Cau %d: =====\n", count);
}

int main() {
    countFunction(1);
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    printArray(arr, size);
    reverseArray(arr, size);
    printf("Mang sau khi dao nguoc: ");
    printArray(arr, size);

    countFunction(2);
    int arr2[] = {3, 7, 2, 9, 5, 1, 8};
    int size2 = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    findMaxMin(arr2, size2, &max, &min);

    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    countFunction(3);
    int matrix1[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[SIZE][SIZE] = {
        {4, 5, 6},
        {7, 8, 9},
        {1, 2, 3}
    };

    int result[SIZE][SIZE];
    addMatrices(matrix1, matrix2, result);
    printf("Matrix 1:\n");
    printMatrix(matrix1);
    printf("\nMatrix 2:\n");
    printMatrix(matrix2);
    printf("\nResult:\n");
    printMatrix(result);

    countFunction(4);
    char str[100];
    printf("Moi nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int result1 = countVowels(str);
    printf("So nguyen am trong chuoi: %d\n", result1);

    countFunction(5);
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Nhap ten: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap diem: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < 3; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("Diem: %.2f\n\n", students[i].marks);
    }

    countFunction(6);
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    printf("Nhap ma tran A (3x3):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Nhap ma tran B (3x3):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, C);
    printf("Ket qua nhan hai ma tran:\n");
    printMatrix(C);

    countFunction(7);
    printf("Nhap chuoi: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

    countFunction(8);
    int array[] = {10, 20, 4, 45, 99, 99, 78};
    size = sizeof(array) / sizeof(array[0]);
    int result3 = findSecondLargest(array, size);
    if (result3 == -1) {
        printf("Khong co phan tu lon thu hai!\n");
    }
    else {
        printf("Phan tu lon thu hai la: %d\n", result3);
    }

    countFunction(9);
    char names[NUM_NAMES][MAX_LEN];
    printf("Nhap %d ten:\n", NUM_NAMES);
    while (getchar() != '\n');
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("Ten %d: ", i + 1);
        fgets(names[i], MAX_LEN, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }

    sortNames(names, NUM_NAMES);
    printf("\nDanh sach ten sau khi sap xep:\n");
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    countFunction(10);
    Employee employees[NUM_EMPLOYEES];
    inputEmployees(employees, NUM_EMPLOYEES);
    displayEmployees(employees, NUM_EMPLOYEES);

    countFunction(11);
    int matrix[SIZE][SIZE];

    inputMatrix(matrix);
    displayMatrix(matrix);
    if (isMagicSquare(matrix)) {
        printf("Ma tran nay la ma tran ma thuat.\n");
    } else {
        printf("Ma tran nay KHONG phai la ma tran ma thuat.\n");
    }

    countFunction(12);
    char str10[100];
    char sub[50];
    printf("Nhap chuoi chinh: ");
    while (getchar() != '\n');

    fgets(str10, sizeof(str10), stdin);
    str10[strcspn(str10, "\n")] = 0; 

    printf("Nhap chuoi con: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0; 

    int pos = substringSearch(str10, sub);
    if (pos != -1) {
        printf("Chuoi con duoc tim thay tai vi tri: %d\n", pos);
    } else {
        printf("Khong tim thay chuoi con trong chuoi chinh.\n");
    }

    countFunction(13);
    int matrix10[MAX][MAX];
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    printf("Nhap ma tran (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix10[i][j]);
        }
    }

    struct SparseElement sparse[MAX * MAX];  
    int nonZeroCount = 0;
    convertToSparse(matrix10, rows, cols, sparse, &nonZeroCount);

    countFunction(14);
    char str11[100];
    int shift;
    printf("Nhap chuoi: ");
    fgets(str11, sizeof(str11), stdin);  
    str11[strcspn(str11, "\n")] = '\0';
    printf("Nhap gia tri shift: ");
    scanf("%d", &shift);
    caesarCipher(str11, shift);
    printf("Chuoi da ma hoa: %s\n", str11);

    countFunction(15);
    Term poly1[MAX_TERMS], poly2[MAX_TERMS];
    int n1, n2, n3;
    
    // Nhập hai đa thức
    printf("Nhap da thuc thu nhat:\n");
    inputPolynomial(poly1, &n1);
    printf("Nhap da thuc thu hai:\n");
    inputPolynomial(poly2, &n2);
    
    // Cộng hai đa thức
    Term polyResult[MAX_TERMS];
    n3 = addPolynomials(poly1, n1, poly2, n2, polyResult);    
    
    // Hiển thị kết quả
    printf("Da thuc thu nhat: ");
    displayPolynomial(poly1, n1);
    printf("Da thuc thu hai: ");
    displayPolynomial(poly2, n2);
    printf("Tong hai da thuc: ");
    displayPolynomial(polyResult, n3);  // Sửa lỗi ở đây
    
    return 0;
}