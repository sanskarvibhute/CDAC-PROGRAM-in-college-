// Q9. Write a program to accept integer values of base and index. Calculate its power 
// of base to index.


#include <iostream>
using namespace std;

int main() {
    int base, index;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter index: ";
    cin >> index;

    int result = 1;
    for (int i = 0; i < index; ++i) {
        result *= base;
    }

    cout << base << " raised to the power " << index << " is " << result << endl;
    return 0;
}