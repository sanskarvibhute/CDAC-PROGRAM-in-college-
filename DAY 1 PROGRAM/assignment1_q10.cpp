// Write a program to display nth term of fibonacci series.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        cout << "The " << n << "th term of Fibonacci series is: " << fibonacci(n) << endl;
    }
    return 0;
}