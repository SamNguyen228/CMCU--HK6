#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int evenOrOdd(int n) {
    return n % 2 == 0;
}

int grade(int score) {
    if (score >= 90) {
        printf("Grade A\n");
    } else if (score >= 80) {
        printf("Grade B\n");
    } else if (score >= 70) {
        printf("Grade C\n");
    } else {
        printf("Grade F\n");
    }
    return 0;
}

void dayOfWeek(int day) {
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid input.\n");
    }
}

int calculator(int num1, char operator, int num2) {
    switch (operator) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return 0;
            }
            return num1 / num2;
        default:
            printf("Error: Invalid operator.\n");
            return 0;
    }
}

void multiplicationTable(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

void countingNumbers() {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int sumOfNaturalNumbers(int n) {
    int sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

void fibonacci(int n) {
    int a = 0, b = 1;
    if (n == 1) {
        printf("%d\n", a);
        return;
    }
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++) {
        int temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
    printf("\n");
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= (int)sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void menuDrivenProgram() {
    int choice, num1, num2;
    do {
        printf("1. Add two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (choice == 1) {
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
            } else {
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
            }
        }
    } while (choice != 3);
}

void trianglePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void playGame() {
    int secretNumber, guess;
    srand(time(0));
    secretNumber = rand() % 100 + 1;
    printf("I have chosen a number between 1 and 100. Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number: %d.\n", secretNumber);
        }
    } while (guess != secretNumber);
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

void countFunction(int count) {
    printf("\n===== Cau %d: =====\n", count);
}

int main() {
    int n, score, day, num, num1, num2, number, nNaturalNumbers, palindromeNumber, fibonacciNumber, primeNumber, triangleNumber, numberToReverse;
    char operator;

    countFunction(1);
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is an %s number.\n", n, evenOrOdd(n) ? "even" : "odd");

    countFunction(2);
    printf("Enter your score: ");
    scanf("%d", &score);
    grade(score);

    countFunction(3);
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    dayOfWeek(day);

    countFunction(4);
    countingNumbers();

    countFunction(5);
    printf("Enter a number: ");
    scanf("%d", &num);
    multiplicationTable(num);

    countFunction(6);
    printf("Enter two numbers(num1 operator num2): ");
    scanf("%d %c %d", &num1, &operator, &num2);
    printf("Result: %d\n", calculator(num1, operator, num2));

    countFunction(7);
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factorial: %d\n", factorial(number));

    countFunction(8);
    printf("Enter a number: ");
    scanf("%d", &nNaturalNumbers);
    printf("Sum: %d\n", sumOfNaturalNumbers(nNaturalNumbers));

    countFunction(9);
    printf("Enter a number: ");
    scanf("%d", &palindromeNumber);
    printf("%d is %s palindrome.\n", palindromeNumber, isPalindrome(palindromeNumber) ? "a" : "not a");

    countFunction(10);
    printf("Enter a number: ");
    scanf("%d", &fibonacciNumber);
    fibonacci(fibonacciNumber);

    countFunction(12);
    menuDrivenProgram();

    countFunction(13);
    printf("Enter a number: ");
    scanf("%d", &triangleNumber);
    trianglePattern(triangleNumber);
    
    countFunction(14);
    playGame();
    
    countFunction(15);
    printf("Enter a number: ");
    scanf("%d", &numberToReverse);
    printf("Reversed number: %d\n", reverseNumber(numberToReverse));

    return 0;
}
