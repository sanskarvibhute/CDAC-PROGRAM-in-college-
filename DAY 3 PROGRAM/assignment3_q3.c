// Q3. Write a recursive function to print given number of terms of Fibonacci series.

#include <stdio.h>

int fibonachi_recur(int num) {
    if (num == 1 || num == 2) {
        return num - 1;
    } else {
        return fibonachi_recur(num - 1) + fibonachi_recur(num - 2);
    }
}

int main() {
    int num;
    printf("enter number to determine fibonachiee series\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("\n %d", fibonachi_recur(i));
    }

    return 0;
}