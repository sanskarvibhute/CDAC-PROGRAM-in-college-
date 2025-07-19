/* Q2. In above program, division may fail if denominator is zero. Use global variable as an error flag to avoid
this problem. */


#include <stdio.h>
#include <stdbool.h>

bool flag_to_check = false;


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
                flag_to_check = true;
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
    
    if(flag_to_check = false){
        printf("mathematical operation occured success full");
    }else{
        printf("mathematical operation occured fail");
    }
    return 0;
}
