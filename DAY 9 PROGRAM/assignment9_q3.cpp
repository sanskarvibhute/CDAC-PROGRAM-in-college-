/* Q3. Write a program to allocate memory for 1D array at runtime to store marks(float) of 5 students. Accept
marks from user and print on console. */

#include <iostream>
using namespace std;

int main() {
    int i;
    float* marks;

    // Allocate memory for 5 float values
    marks = new float[5];

    // Accept marks from user
    cout << "Enter marks for 5 students:" << endl;
    for (i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Print the marks
    cout << "\nMarks of 5 students:" << endl;
    for (i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    // Free allocated memory
    delete[] marks;

    return 0;
}
