// Q1. Write a function to implement four function calculator. Function would take operands and operator as
// arguments and returns result.


#include <stdio.h>

float displayResult(float num1, char op, float num2) { 
    float result = 0;  

    switch (op) {
        case '*':
            result = num1 * num2;
            break;
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Division by zero error\n");
                return 0; 
            } else {
                result = num1 / num2;
                break;
            }
        default:
            printf("Invalid operator\n");
            return 0;
    }
    return result;
}

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number:\t");
    scanf("%f", &num1);

    // To consume the newline left by previous scanf
    getchar();

    printf("Enter operator (+, -, *, /):\t");
    scanf("%c", &op);

    printf("Enter second number:\t");
    scanf("%f", &num2);

    result = displayResult(num1, op, num2);
    printf("Result: %f\n", result);
    return 0;
}
