/* Q2. Write another two functions to accept and print array of student structure. */

#include <iostream>
using namespace std;

// Structure to store student information
struct Student {
    int rollno;
    char name[50];
    float marks;
};

// Function to accept student data
void acceptStudents(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> s[i].rollno;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }
}

// Function to print student data
void printStudents(Student s[], int n) {
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << s[i].rollno << endl;
        cout << "Name   : " << s[i].name << endl;
        cout << "Marks  : " << s[i].marks << endl << endl;
    }
}

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    acceptStudents(students, SIZE);
    printStudents(students, SIZE);

    return 0;
}
