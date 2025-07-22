// Q2. Write a command line program to convert all vowels in a given string to uppercase.

#include <iostream>
#include <string>
#include <cctype>

// Function to check if a character is a vowel
bool isVowel(char c) {
    char lowerC = std::tolower(c);
    return (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || 
            lowerC == 'o' || lowerC == 'u');
}

// Function to convert vowels to uppercase
void convertVowelsToUppercase(std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (isVowel(str[i])) {
            str[i] = std::toupper(str[i]);
        }
    }
}

int main() {
    std::string str;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    std::cout << "Original string: " << str << std::endl;
    
    convertVowelsToUppercase(str);
    
    std::cout << "String with uppercase vowels: " << str << std::endl;
    
    return 0;
}
