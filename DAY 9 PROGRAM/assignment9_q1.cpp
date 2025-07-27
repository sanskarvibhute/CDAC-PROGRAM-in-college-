/* Q1. Write a program declare a structure to store student information. The structure contains rollno, name
and marks. Write functions to accept and print one student record. */

#include <iostream>
using namespace std;

// Define structure to store student information
struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    Student s;

    // Accept student details
    cout << "Enter roll number: ";
    cin >> s.rollno;

    cout << "Enter name: ";
    cin >> s.name;  // Accepts single-word name only

    cout << "Enter marks: ";
    cin >> s.marks;

    // Print student details
    cout << "\nStudent Details:" << endl;
    cout << "Roll No: " << s.rollno << endl;
    cout << "Name   : " << s.name << endl;
    cout << "Marks  : " << s.marks << endl;

    return 0;
}
