// 1. Write a program to accept marks of five subjects, calculate its average.
// Test Case 1: Valid Input
// Test Case 2: Zero Marks
// Test Case 3: Maximum Marks
// Test Case 4: Minimum Marks
// Test Case 5: Decimal Average
// Test Case 6: Invalid Input (Negative Marks)

#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total_marks;
    float average;
    int i; 

    printf("Enter marks for five subjects (0-100):\n");

    
    float marks[5]; 
    
    for (i = 0; i < 5; i++) {
        while (1) { // Infinite loop, will break once valid input is received which is float 
            printf("Enter marks for Subject %d: ", i + 1);
            
            
            if (scanf("%f", &marks[i]) == 1) {
                // Validate if marks are number only not char
                if (marks[i] >= 0 && marks[i] <= 100) {
                    break; 
                } else {
                    printf("Invalid input: Marks must be between 0 and 100.\n");
                }
            } else {
                printf("Invalid input: Please enter a numeric value.\n");
                
                while (getchar() != '\n');
            }
        }
    }

    
    total_marks = 0; 
    for (i = 0; i < 5; i++) {
        total_marks += marks[i];
    }

    
    average = total_marks / 5.0; 

   
    printf("\nThe total marks are: %.2f\n", total_marks);
    printf("The average marks of the five subjects is: %.2f\n", average);

    return 0; 
}