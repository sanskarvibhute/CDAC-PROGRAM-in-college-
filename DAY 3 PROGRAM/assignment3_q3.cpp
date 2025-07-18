// Q3. Write a recursive function to print given number of terms of Fibonacci series.

#include <iostream>

int fibonacci_recur(int num) {
    if (num == 1 || num == 2) {
        return num - 1;
    } else {
        return fibonacci_recur(num - 1) + fibonacci_recur(num - 2);
    }
}

int main() {
    int num;
    std::cout << "Enter number to determine Fibonacci series: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
        std::cout << fibonacci_recur(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}