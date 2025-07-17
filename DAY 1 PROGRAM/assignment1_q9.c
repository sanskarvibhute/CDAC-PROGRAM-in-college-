// Q9. Write a program to accept integer values of base and index. Calculate its power 
// of base to index.

#include <stdio.h>

int main() {
    int base, index, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    for (int i = 0; i < index; i++) {
        result *= base;
    }

    printf("%d to the power %d is %d\n", base, index, result);

    return 0;
}