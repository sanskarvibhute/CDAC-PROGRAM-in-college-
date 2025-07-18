// Q2. Write a function to print given number of terms of Fibonacci series.

#include <iostream>
using namespace std;

void printFibonacci(int terms) {
    int first = 0, second = 1, next;
    
    if (terms < 1) {
        cout << "Please enter a positive number" << endl;
        return;
    }
    
    cout << "Fibonacci Series: ";
    if (terms >= 1) cout << first << " ";
    if (terms >= 2) cout << second << " ";
    
    for (int i = 3; i <= terms; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}