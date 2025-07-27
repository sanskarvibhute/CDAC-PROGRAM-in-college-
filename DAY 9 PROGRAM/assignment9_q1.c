/* Q1. Write a program declare a structure to store student information. The structure contains rollno, name
and marks. Write functions to accept and print one student record. */

#include <stdio.h>

// Define structure to store student information
struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Accept student details
    printf("Enter roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter name: ");
    scanf("%s", s.name);  // Accepts single-word name only

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name   : %s\n", s.name);
    printf("Marks  : %.2f\n", s.marks);

    return 0;
}
