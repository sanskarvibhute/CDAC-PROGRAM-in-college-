/* Q3. Write a function to calculate sum and product into a single function and print result in calling function.
(Do not use global variables for result) */

#include <iostream>
using namespace std;

void sum_product(float n1, float n2, float* sum, float* product) {
    *sum = n1 + n2;
    *product = n1 * n2;
}

int main() {
    float num1, num2, sum = 0, product = 0;

    cout << "Enter first number:\t";
    cin >> num1;
    
    cout << "Enter second number:\t";
    cin >> num2;
    
    sum_product(num1, num2, &sum, &product);
    cout << "the sum of num " << num1 << " and " << num2 << " is = " << sum << endl;
    cout << "the product of num " << num1 << " and " << num2 << " is = " << product << endl;
    
    return 0;
}