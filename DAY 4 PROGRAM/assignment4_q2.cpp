/* Q2. In above program, division may fail if denominator is zero. Use global variable as an error flag to avoid
this problem. */


#include <iostream>
using namespace std;

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
    
    if(!flag_to_check) {
        cout << "Mathematical operation occurred successfully";
    } else {
        cout << "Mathematical operation failed";
    }
    return 0;
}