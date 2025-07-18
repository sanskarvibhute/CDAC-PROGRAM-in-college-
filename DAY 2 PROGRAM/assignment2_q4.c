// Q4. Write a function to print a given number in binary format using recursion.

#include <stdio.h>

void printBinary(int n) {

    if (n > 1) {
        printBinary(n / 2);
    }
    
    // Print the current bit (remainder when divided by 2) to print 0 & 1
    printf("%d", n % 2);
}

int main() {
    int num;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Input validation
    if (num < 0) {
        printf("Please enter a non-negative number\n");
        return 1;
    }
    
    // Special case for 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    
    // Print binary representation
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    
    return 0;
}
