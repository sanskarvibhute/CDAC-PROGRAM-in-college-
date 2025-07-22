// Q1. Write command line program to check if a string is palindrome or not.

#include <iostream>
#include <string>

// This code checks if a given string is a palindrome. It reads a string from the user
// and compares characters from the start and end moving towards the center.
// If all corresponding characters match, it concludes that the string is a palindrome.

int main() {
    std::string str;
    bool isPalindrome = true;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int len = str.length();

    // Check if the string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

// .................................................................................................................

#include <iostream>
#include <vector>

bool is_palindrome(const std::vector<int>& arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Getting array size from user
    int size;
    std::cout << "Enter the size of array: " << std::endl;
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size of array" << std::endl;
        return 1;
    }

    std::vector<int> arr(size);
    
    // Getting array elements from user
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    if (is_palindrome(arr, size)) {
        std::cout << "The array is palindrome" << std::endl;
    } else {
        std::cout << "The array is not palindrome" << std::endl;
    }

    return 0;
}

// ..............................................................................................................

#include <iostream>
#include <vector>

bool is_palindrome(const std::vector<int>& arr, int size) {
    // Empty array or single element array is always a palindrome
    if (size <= 1) {
        return true;
    }

    int left = 0;
    int right = size - 1;
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    // Getting array size from user
    int size;
    std::cout << "Enter the size of array: " << std::endl;
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size of array" << std::endl;
        return 1;
    }

    std::vector<int> arr(size);
    
    // Getting array elements from user
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    if (is_palindrome(arr, size)) {
        std::cout << "The array is palindrome" << std::endl;
    } else {
        std::cout << "The array is not palindrome" << std::endl;
    }

    return 0;
}


// .........................................................................................................


#include <iostream>
#include <string>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // It's a palindrome
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::cin >> str; // Read input string

    if (isPalindrome(str)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is NOT a palindrome." << std::endl;
    }

    return 0;
}
