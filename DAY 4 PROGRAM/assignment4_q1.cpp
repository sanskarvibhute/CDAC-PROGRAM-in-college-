// 1. Write a function to implement four function calculator. Function would take operands and operator as
// arguments and returns result.

#include <iostream>
using namespace std;

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
                cout << "Division by zero error" << endl;
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }
    return result;
}

int main() {
    float num1, num2, result;
    char op;

    cout << "Enter first number:\t";
    cin >> num1;

    cout << "Enter operator (+, -, *, /):\t";
    cin >> op;

    cout << "Enter second number:\t";
    cin >> num2;

    result = displayResult(num1, op, num2);
    cout << "Result: " << result << endl;
    return 0;
}