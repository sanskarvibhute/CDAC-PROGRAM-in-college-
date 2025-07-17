//Q5. Write a program to create four function calculator. Four functions are +, -, *, /

#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero! is invalid in mathematical terms\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}