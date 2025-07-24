/*  Q1. Write a program to accept two operands and operator as command line arguments. Perform the
operation and print result. (Also do error check if arguments are not passed correctly) */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if exactly 3 arguments are provided
    if (argc != 4) {
        printf("Error: Please provide exactly 3 arguments\n");
        printf("Usage: %s <number1> <operator> <number2>\n", argv[0]);
        printf("Example: %s 10 + 5\n", argv[0]);
        return 1;
    }
    
    // Convert strings to numbers
    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char operator = argv[2][0];
    
    // Check if operator is valid
    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error: Invalid operator '%c'\n", operator);
        printf("Please use: + - * /\n");
        return 1;
    }
    
    // Check division by zero
    if (operator == '/' && num2 == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 1;
    }
    
    double result;
    
    // Perform calculation
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        result = num1 / num2;
    }
    
    // Print result
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    
    return 0;
}
