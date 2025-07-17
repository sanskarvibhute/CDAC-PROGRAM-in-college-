//Q2. Input a number and display whether number is Even or Odd.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is Even." << endl;
    else
        cout << num << " is Odd." << endl;

    return 0;
}