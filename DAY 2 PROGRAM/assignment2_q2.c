// Q2. Write a function to print given number of terms of Fibonacci series.

#include <stdio.h>

void printFibonacci(int terms) {
    int first = 0, second = 1, next;
    
    if (terms < 1) {
        printf("Please enter a positive number\n");
        return;
    }
    
    printf("Fibonacci Series: ");
    if (terms >= 1) printf("%d ", first);
    if (terms >= 2) printf("%d ", second);
    
    for (int i = 3; i <= terms; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}