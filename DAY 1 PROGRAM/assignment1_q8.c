// Q8.Write a program to find factorial of given number.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;//unsined long long to handle large results with positive integers

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}