// Q4. Write a function to reverse an array.

#include <iostream>
#include <vector>

void arrayPrint(const std::vector<int>& arr, int numlen) {
    for (int i = 0; i < numlen; i++) {
        std::cout << "The value of element " << i << " is " << arr[i] << std::endl;
    }
}

void arrayRev(std::vector<int>& arr, int numlen) {
    int temp;

    for (int i = 0; i < numlen / 2; i++) {
        // swap item arr[i] with arr[numlen-1-i]
        temp = arr[i];
        arr[i] = arr[numlen - 1 - i];
        arr[numlen - 1 - i] = temp;
    }
}

int main() {
    int numlen;
    std::cout << "Enter the number of elements in the array" << std::endl;
    std::cin >> numlen;
    
    std::vector<int> arr(numlen);
    
    for (int j = 0; j < numlen; j++) {
        std::cout << "Enter the value of " << j << " element of an array" << std::endl;
        std::cin >> arr[j];
    }

    std::cout << "Before reversing the array" << std::endl;
    arrayPrint(arr, numlen);
    arrayRev(arr, numlen);
    std::cout << "\nAfter reversing the array" << std::endl;
    arrayPrint(arr, numlen);

    return 0;
}
