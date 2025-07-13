#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define PI 3.141592653589793


void calculateArea(int r) {
    float area = PI * r * r;
    printf("Dien tich hinh tron la: %.2f\n", area); 
}

void calculateMath(int a, int b) {
    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
    printf("Tich: %d\n", a * b);
    if (b != 0) {
        printf("Thuong: %.2f\n", (float)a / b);
    } else {
        printf("Thuong: Khong hop le \n");
    }    
}

void checkSize() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));
}

void printEscapeSequences() {
    // \n - Xuống dòng
    printf("This is the first line.\nThis is the second line.\n");
    // \t - Tab ngang
    printf("Name\t\tAge\tCity\n");
    printf("Alice\t\t25\tNew York\n");
    // \\ - In dấu gạch chéo ngược
    printf("To display a backslash, use \\\\ like this: \\\\ ");
    // \" - In dấu ngoặc kép
    printf("She said, \"Practice makes perfect!\"\n");
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void convertTemperature() {
    float tempC, tempF;
    printf("\nNhap gia tri do C: ");
    if (scanf("%f", &tempC) != 1) {
        printf("Gia tri khong hop le!\n");
        return;
    }
    tempF = celsiusToFahrenheit(tempC);
    printf("%.2f Celsius = %.2f Fahrenheit\n", tempC, tempF);

    printf("\nNhap gia tri do F: ");
    if (scanf("%f", &tempF) != 1) {
        printf("Gia tri khong hop le!\n");
        return;
    }
    tempC = fahrenheitToCelsius(tempF);
    printf("%.2f Fahrenheit = %.2f Celsius\n", tempF, tempC);
}


void printRandomNumbers() {
    srand(time(NULL));

    printf("5 Random Numbers:\n");
    for (int i = 0; i < 5; i++) {
        int randomNum = rand() % 100; 
        printf("Random Number %d: %d\n", i + 1, randomNum);
    }
}

float calculateBMI() {
    float weight, height;
    printf("Nhap can nang (kg): ");
    scanf("%f", &weight);
    printf("Nhap chieu cao (m): ");
    scanf("%f", &height);
    if (weight <= 0 || height <= 0) {
        printf("Thong tin khong hop le!\n");
        return -1;
    }    
    float bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);
    return bmi;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}


void calculateSquareRoot() {
    int number;
    printf("Nhap so can tinh can: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("ERROR\n");
    } else {
        double result = sqrt(number);
        printf("Can bac hai cua %d la %.2lf\n", number, result);
    }
}

void calculatePower() {
    int base, exponent;
    printf("\nNhap co so: ");
    scanf("%d", &base);
    printf("Nhap so mu: ");
    scanf("%d", &exponent);

    int result = (int)pow(base, exponent);
    printf("%d ^ %d = %d\n", base, exponent, result);
}


void caculateSinCos() {
    double angle_deg;
    printf("\nNhap goc (do): ");
    scanf("%lf", &angle_deg); 

    double angle_rad = angle_deg * (PI / 180.0); 
    double sin_val = sin(angle_rad);
    double cos_val = cos(angle_rad);

    printf("sin(%.0lf) = %.4lf\n", angle_deg, sin_val);
    printf("cos(%.0lf) = %.4lf\n", angle_deg, cos_val);
}

void countFunction(int count) {
    printf("\n");
    printf("===== Cau %d: =====\n", count);
}


int main() {
    // Câu 1
    countFunction(1);
    int x = 10;
    float y = 1.1;
    char z = 'A';
    double n = 2.3;
    printf("%d %.2f %c %.2lf\n", x, y, z, n); 

    // Câu 2 
    countFunction(2);
    int r;
    printf("Nhap ban kinh: ");
    scanf("%d", &r);
    calculateArea(r); 

    // Câu 3
    countFunction(3);
    char name[100];
    int age;
    printf("Nhap ten cua ban: ");
    scanf("%s", name);
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old!\n", name, age);

    // Câu 4 
    countFunction(4);
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    calculateMath(a, b);

    // Câu 5
    countFunction(5);
    char ch;
    printf("Nhap mot ky tu: ");
    while ((getchar()) != '\n');
    ch = getchar();
    printf("Ban da nhap: ");
    putchar(ch);
    printf("\n");

    // Câu 6
    countFunction(6);
    checkSize();

    // Câu 7
    countFunction(7);
    printEscapeSequences();
    
    // Câu 8
    countFunction(8);
    convertTemperature();

    // Câu 9
    countFunction(9);
    char str1[100], str2[100];
    printf("Nhap mot tu: ");
    scanf("%s", str1);
    printf("Ban da nhap (scanf): %s\n", str1);
    while (getchar() != '\n');

    printf("Nhap mot cau: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("Ban da nhap (fgets): %s\n", str2);


    // Câu 10
    countFunction(10);
    printRandomNumbers();
    
    // Câu 11
    countFunction(11);
    calculateBMI();

    // Câu 12:
    countFunction(12);
    int arr[5], sum = 0;
    float avg;
    printf("Nhap 5 so nguyen: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / 5;
    printf("Tong: %d\n", sum);
    printf("Trung binh: %.2f\n", avg);
    
    // Câu 13:
    countFunction(13);
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong la so nguyen to.\n", num);
    }

    // Câu 14:
    countFunction(14);
    calculateSquareRoot();
    calculatePower();
    caculateSinCos();
    
    // Câu 15:
    countFunction(15);
    float km, mile;
    printf("Kilometers\tMiles\n");
    for (km = 1; km <= 10; km++) {
        mile = km * 0.621371;
        printf("%.0f\t\t%.3f\n", km, mile);
    }
    return 0;
}
