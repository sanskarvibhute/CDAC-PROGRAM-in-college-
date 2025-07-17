// Q11. Write a program to accept a number and check if it is prime or not.

#include <iostream>
using namespace std;

int main() {
    int num, i, isPrime = 1;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}