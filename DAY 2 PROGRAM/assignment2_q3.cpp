//Q3. Write a function to print prime numbers in the given range.


#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;//in cpp false is equivalent to 0 in c
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimeRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int start, end;
    std::cout << "Enter range (start end): ";
    std::cin >> start >> end;
    printPrimeRange(start, end);
    return 0;
}