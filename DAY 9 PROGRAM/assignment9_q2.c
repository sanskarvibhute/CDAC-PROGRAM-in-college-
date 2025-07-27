/* Q2. Write another two functions to accept and print array of student structure. */

#include <stdio.h>

// Structure to store student information
struct Student {
    int rollno;
    char name[50];
    float marks;
};

// Function to accept student data
void acceptStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);  // accepts single-word name

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to print student data
void printStudents(struct Student s[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", s[i].rollno);
        printf("Name   : %s\n", s[i].name);
        printf("Marks  : %.2f\n\n", s[i].marks);
    }
}

int main() {
    const int SIZE = 3;
    struct Student students[SIZE];

    acceptStudents(students, SIZE);
    printStudents(students, SIZE);

    return 0;
}
