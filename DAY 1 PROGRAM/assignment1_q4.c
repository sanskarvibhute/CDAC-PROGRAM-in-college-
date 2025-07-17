/*  Q4. Write a program to accept 5 digit number and check whether it is a numeric palindrome.
 (if reversed number is same as entered number it is called as palindrome) */
// Ans-->
#include <stdio.h>

int main() {
    int num, reversed = 0, temp, digit;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Invalid input! Please enter a 5-digit number.\n");
        return 1;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (num == reversed) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}