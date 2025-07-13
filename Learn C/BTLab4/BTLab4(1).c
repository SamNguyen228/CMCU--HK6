#include<stdio.h>
#include <string.h>
#include "string_utils.h"
#include "math_utils.h"

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

unsigned long long factorial(int n) {
    if (n < 0) {
        return -1;
    }
    
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        if (result == 0) { 
            printf("Overflow! Factorial of %d is too large.\n", n);
            return 0;
        }
    }
    return result;
}

void swap(int a, int b) {
    int temp;
    temp = a; 
    a = b; 
    b = temp; 
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int maxOfThree(int a, int b, int c) {
    int max = a; 
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c;
    }

    return max; 
}

int fibonacci(int n) {
    if (n <= 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void sortArray(int arr[], int size);

void swap2(int *a, int *b);

void countFunction(int count) {
    printf("\n===== Task %d: =====\n", count);
}

int main() {
    countFunction(1);
    info();

    countFunction(2);
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    greet(name);

    countFunction(3);
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square of %d is %d\n", n, square(n));

    countFunction(4);
    int a, b;
    printf("Enter two numbers(number1 number2): ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n", a, b, add(a, b));

    countFunction(5);
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    unsigned long long giaithua = factorial(number);
    if (giaithua != 0) { 
        printf("%d! = %llu\n", number, giaithua);
    }

    countFunction(6);
    printf("Enter two numbers(num1 num2): ");
    scanf("%d %d", &a, &b);
    printf("Before swapping, a = %d, b = %d\n", a, b);
    swap(a, b);

    countFunction(7);
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d is a prime number: %s\n", number, isPrime(number)? "Yes" : "No");

    countFunction(8);
    int x, y, z;
    printf("Enter three integers(num1 num2 num3): ");
    scanf("%d %d %d", &x, &y, &z);
    int max = maxOfThree(x, y, z);
    printf("The maximum of the three numbers is: %d\n", max);

    countFunction(9);
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit is %.2f Celsius.\n", fahrenheit, celsius);

    countFunction(10);
    int num1, num2;
    printf("Enter two numbers(number1 number2): ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));

    countFunction(11);
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    }

    countFunction(12);
    int choice;
    float result;

    while (1) {
        printf("\nModular Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Exiting the calculator.\n");
            break;
        }
        printf("Enter two integers(num1 num2): ");
        scanf("%d %d", &a, &b);
        switch (choice) {
            case 1:
                result = add(a, b);
                printf("Result: %d\n", (int)result);
                break;
            case 2:
                result = subtract(a, b);
                printf("Result: %d\n", (int)result);
                break;
            case 3:
                result = multiply(a, b);
                printf("Result: %d\n", (int)result);
                break;
            case 4:
                if (b != 0) {
                    result = divide(a, b);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    countFunction(13);
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, size);
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countFunction(14);
    int number1, number2;
    printf("Enter two integers(num1 num2): ");
    scanf("%d %d", &number1, &number2);

    printf("Before swapping: number1 = %d, number2 = %d\n", number1, number2);
    swap2(&number1, &number2);
    printf("After swapping: number1 = %d, number2 = %d\n", number1, number2);

    countFunction(15);
    char str[100];
    printf("Enter a string: ");
    fflush(stdin); 
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    reverseString(str);
    printf("Reversed string: %s\n", str);

    toUpperCase(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap2(int *a, int *b) {
    int temp = *a; 
    *a = *b;
    *b = temp;
}

// gcc -o program "BTLab4(1).c" math_utils.c string_utils.c
// ./program.exe