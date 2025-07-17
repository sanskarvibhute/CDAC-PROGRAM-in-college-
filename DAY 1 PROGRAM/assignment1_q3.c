// Q3. Write a program to find maximum of three numbers.

#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("Maximum of three numbers is: %d\n", max);
    return 0;
}