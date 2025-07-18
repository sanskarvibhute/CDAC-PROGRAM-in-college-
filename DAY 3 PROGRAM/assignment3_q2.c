// Q2. Calculate Sum of Numbers from 1 to N
// Write a recursive function to calculate the sum of numbers from 1 to n.
// The function should take an integer n as input and return the sum.

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int num, natural_sum;
    printf("enter number up to which we determine sum of natural numbers\t");
    scanf("%d", &num);

    natural_sum = sum(num);
    printf("%d", natural_sum);

    return 0;
}