// Q5. Write a function to calculate nth term of the Fibonacci series using recursion.

#include <iostream>
using namespace std;

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
    cout << "enter number to determine fibonachiee series" << endl;
    cin >> num;
    febo = fibonachi_recur(num);
    cout << endl << " " << febo;

    return 0;
}
