/* Q7. Write a program to accept number 
1.Calculate sum of digits of integer
2.Reverse the number
3.Check whether it is Armstrong number or not*/


#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, rev = 0, arm = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate sum of digits and reverse the number
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        rev = rev * 10 + digit;
        temp /= 10;
        digits++;
    }

    // Check Armstrong number
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        arm += pow(digit, digits);
        temp /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", rev);
    if (arm == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}