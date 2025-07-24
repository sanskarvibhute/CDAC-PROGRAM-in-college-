/*Q2. Find the first non repeating character in a given string */

#include <iostream>
#include <cstring>
using namespace std;

// Function to find the first non-repeating character
char find_first_non_repeating(const char *str) {
    int freq[256] = {0}; // ASCII character frequency array
    int len = strlen(str);
    
    // Count frequency of each character
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++;
    }
    
    // Find first character with frequency 1
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    
    return '\0'; // No non-repeating character found
}

int main() {
    char str[200];
    
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    char result = find_first_non_repeating(str);
    
    if (result != '\0') {
        cout << "The first non-repeating character is: '" << result << "'" << endl;
    } else {
        cout << "No non-repeating character found in the string." << endl;
    }
    
    return 0;
}
