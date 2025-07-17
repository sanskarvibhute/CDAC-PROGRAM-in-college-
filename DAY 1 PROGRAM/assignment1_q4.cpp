/* Write a program to accept 5 digit number and check whether it is a numeric palindrome. 
(if reversed number is same as entered number it is called as palindrome) */
// Ans-->

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original, digit;
    cout << "Enter a 5-digit number: ";
    cin >> num;

    
    if (num < 10000 || num > 99999) {
        cout << "Invalid input! Please enter a 5-digit number." << endl;
        return 1;
    }

    original = num;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;

    return 0;
}
