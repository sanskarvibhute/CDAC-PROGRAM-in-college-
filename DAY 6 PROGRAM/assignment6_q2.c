// Q2. Write a command line program to convert all vowels in a given string to uppercase.


#include <stdio.h>
#include <stdbool.h>

// Function to check if character is vowel
bool isVowel(char c) {
    return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || 
            c == 'i' || c == 'I' || c == 'o' || c == 'O' || 
            c == 'u' || c == 'U');
}

// Function to convert lowercase vowel to uppercase
char toUpperVowel(char c) {
    if (c >= 'a' && c <= 'z') {
        // Check if it's a lowercase vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return c - 32; // Convert to uppercase
        }
    }
    return c; // Return unchanged if not a lowercase vowel
}

int main() {
    char str[1000];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    
    printf("Original string: %s\n", str);
    
    // Convert vowels to uppercase
    i = 0;
    while (str[i] != '\0') {
        if (isVowel(str[i])) {
            str[i] = toUpperVowel(str[i]);
        }
        i++;
    }
    
    printf("String with uppercase vowels: %s\n", str);
    
    return 0;
}
