#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    // Check if exactly 3 arguments are provided
    if (argc != 4) {
        cout << "Error: Please provide exactly 3 arguments" << endl;
        cout << "Usage: " << argv[0] << " <number1> <operator> <number2>" << endl;
        cout << "Example: " << argv[0] << " 10 + 5" << endl;
        return 1;
    }
    
    // Convert strings to numbers
    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char operator_ch = argv[2][0];
    
    // Check if operator is valid
    if (operator_ch != '+' && operator_ch != '-' && operator_ch != '*' && operator_ch != '/') {
        cout << "Error: Invalid operator '" << operator_ch << "'" << endl;
        cout << "Please use: + - * /" << endl;
        return 1;
    }
    
    // Check division by zero
    if (operator_ch == '/' && num2 == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
        return 1;
    }
    
    double result;
    
    // Perform calculation
    if (operator_ch == '+') {
        result = num1 + num2;
    } else if (operator_ch == '-') {
        result = num1 - num2;
    } else if (operator_ch == '*') {
        result = num1 * num2;
    } else if (operator_ch == '/') {
        result = num1 / num2;
    }
    
    // Print result
    cout.precision(2);
    cout << fixed << num1 << " " << operator_ch << " " << num2 << " = " << result << endl;
    
    return 0;
}
