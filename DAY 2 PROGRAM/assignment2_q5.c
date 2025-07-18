// Q5. Write a function to calculate nth term of the Fibonacci series using recursion.

#include <stdio.h>

int fibonachi_recur(int num)
{
    if (num == 1 || num == 2)
    {
        return num - 1;
    }
    else
    {
        return fibonachi_recur(num - 1) + fibonachi_recur(num - 2);
    }
}

int main()
{
    int num, febo;
    printf("enter number to determine fibonachiee series\n");
    scanf("%d", &num);
    febo = fibonachi_recur(num);
    printf("\n %d", febo);

    return 0;
}