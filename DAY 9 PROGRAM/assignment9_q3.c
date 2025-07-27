/* Q3. Write a program to allocate memory for 1D array at runtime to store marks(float) of 5 students. Accept
marks from user and print on console. */ 


#include<stdio.h>
#include <stdlib.h> // for malloc and free

int main()
{
    int i;
    float *marks;

    // Allocate memory for 5 float values
    marks = (float *)malloc(5 * sizeof(float));

    // Check if memory allocation was successful
    if (marks == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with error
    }

    // Accept marks from user
    printf("Enter marks for 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Print the marks
    printf("\nMarks of 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }

    // Free allocated memory
    free(marks);

    return 0;
}
