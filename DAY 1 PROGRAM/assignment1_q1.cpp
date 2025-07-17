// Q2. Write a program to accept two numbers and display division of the two numbers. Check divide by zero
// error. If divider is zero then display appropriate error message.


#include <iostream>
using namespace std;

int main() {
    double num1, num2; //we can also use float, but double is more precise
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number (divider): ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        double result = num1 / num2;
        cout << "Result: " << result << endl;
    }

    return 0;
}