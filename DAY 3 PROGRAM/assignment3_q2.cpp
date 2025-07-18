/*Q2. Calculate Sum of Numbers from 1 to N
 Write a recursive function to calculate the sum of numbers from 1 to n.
 The function should take an integer n as input and return the sum. */

#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int num, natural_sum;
    cout << "Enter number up to which we determine sum of natural numbers: ";
    cin >> num;

    natural_sum = sum(num);
    cout << natural_sum << endl;

    return 0;
}