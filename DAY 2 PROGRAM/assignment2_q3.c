//Q3. Write a function to print prime numbers in the given range.

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
    // Alternative approach without using sqrt:    
    // for (int i = 2; i * i <= n; i++) {
    //     if (n % i == 0) return 0;
    // }
    // return 1;
}

void printPrimeRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    printPrimeRange(start, end);
    return 0;
}