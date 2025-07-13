#include <stdio.h>
#include <math.h>
#include <string.h>
#include "math_utils.h"
#include "string_utils.h"

void info() {
    printf("Fullname: Vu Van Hiep\n");
    printf("Gender: Male\n");
    printf("Age: 20\n");
    printf("Hometown: Hai Phong\n");
    printf("Phonenumber: +84378131520\n");
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int square(int n) {
    return n * n;
}

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int maxOfThree(int a, int b, int c) {
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
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
    printf("%.2f Celsius = %.2f Fahrenheit\n", tempC, celsiusToFahrenheit(tempC));

    printf("\nNhap gia tri do F: ");
    if (scanf("%f", &tempF) != 1) {
        printf("Gia tri khong hop le!\n");
        return;
    }
    printf("%.2f Fahrenheit = %.2f Celsius\n", tempF, fahrenheitToCelsius(tempF));
}

int fibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

void quickSort(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

void countFunction(int count) {
    printf("\n===== Task %d: =====\n", count);
}

int main() {
    countFunction(1);
    info();

    countFunction(2);
    char name[50];
    printf("Enter your name: ");
    getchar();  
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    greet(name);

    countFunction(3);
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Square of %d: %d\n", n, square(n));

    countFunction(4);
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Sum of %d and %d is: %d\n", a, b, add(a, b));

    countFunction(5);
    printf("Factorial of %d: %d\n", n, factorial(n));

    countFunction(6);
    int x = 5, y = 10;
    printf("Before swapping, x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("After swapping, x: %d, y: %d\n", x, y);

    countFunction(7);
    printf("%d is a prime number: %s\n", n, isPrime(n) ? "Yes" : "No");

    countFunction(8);
    int num1, num2, num3;
    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Max: %d\n", maxOfThree(num1, num2, num3));

    countFunction(9);
    convertTemperature();

    countFunction(10);
    printf("Fibonacci of %d: %d\n", n, fibonacci(n));

    countFunction(11);
    int arr[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input!\n");
            return 1;
        }
    }
    quickSort(arr, 0, 4);
    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countFunction(12);
    printf("Before swapping, a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("After swapping, a: %d, b: %d\n", a, b);

    countFunction(13);
    char str[100];
    printf("Enter a string: ");
    getchar();
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    reverseString(str);
    printf("Reversed String: %s\n", str);
    toUpperCase(str);
    printf("Uppercase String: %s\n", str);

    return 0;
}
