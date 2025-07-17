/* Q7. Write a program to accept number 
1.Calculate sum of digits of integer
2.Reverse the number
3.Check whether it is Armstrong number or not*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, sum = 0, rev = 0, arm = 0, digits = 0;
    cout << "Enter an integer: ";
    cin >> num;

    // Q1. >> Calculate sum of digits
    temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "Sum of digits: " << sum << endl;

    // Q2. >> Reverse the number
    temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reversed number: " << rev << endl;

    // Q3 >> Check Armstrong number
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        arm += pow(temp % 10, digits);
        temp /= 10;
    }
    if (arm == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}