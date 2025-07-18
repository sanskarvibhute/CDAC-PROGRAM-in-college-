// Q4. Write a function to print a given number in binary format using recursion.

#include <iostream>
using namespace std;

void printBinary(int n) {

    if (n > 1) {
        printBinary(n / 2);
    }
    
    // Print the current bit (remainder when divided by 2) to print 0 & 1
    cout << n % 2;
}

int main() {
    int num;
    
    // Input from user
    cout << "Enter a number: ";
    cin >> num;
    
    // Input validation
    if (num < 0) {
        cout << "Please enter a non-negative number" << endl;
        return 1;
    }
    
    // Special case for 0
    if (num == 0) {
        cout << "Binary representation: 0" << endl;
        return 0;
    }
    
    // Print binary representation
    cout << "Binary representation: ";
    printBinary(num);
    cout << endl;
    
    return 0;
}
