/*Q1. Write a program to accept two numbers and display division of the two numbers.
Check divide by zero error. If divider is zero then display appropriate error message. 
*/




#include <stdio.h>

int main() {
    double num1, num2, result; //we can also use float, but double is more precise

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        printf("Result of division: %.2lf\n", result);
    }

    return 0;
}