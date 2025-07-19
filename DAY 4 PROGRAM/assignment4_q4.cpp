/* Q4. Write a function to perform division of two numbers. Return result via out parameter and return value
indicates the error (due to zero denominator). */

#include <iostream>
using namespace std;

bool divide(float num, float den, float& result) {
    if (den == 0) {
        return false;
    }
    result = num / den;
    return true;
}

int main() {
    float numerator, denominator, quotient;
    
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    
    if (divide(numerator, denominator, quotient)) {
        cout << "Result: " << quotient << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
    return 0;
}