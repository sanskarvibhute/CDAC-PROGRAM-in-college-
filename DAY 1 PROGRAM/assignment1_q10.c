// Q10. Write a program to display nth term of fibonacci series.

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("The %dth term of Fibonacci series is %d\n", n, a);
    } else if (n == 2) {
        printf("The %dth term of Fibonacci series is %d\n", n, b);
    } else {
        for (i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %dth term of Fibonacci series is %d\n", n, b);
    }
    return 0;
}