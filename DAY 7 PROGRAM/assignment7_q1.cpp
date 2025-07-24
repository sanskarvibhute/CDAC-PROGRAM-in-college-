/* Q.1. Write a function to return number of occurances of given character in a string irrespective of case. */

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Returns the number of occurrences of ch (case-insensitive) in str
int count_char_occurrences(const char *str, char ch) {
    int count = 0;
    char target = tolower(ch);

    while (*str) {
        if (tolower(*str) == target) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[200], ch;

    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    cout << "Enter the character to count: ";
    cin >> ch;

    int result = count_char_occurrences(str, ch);

    cout << "The character '" << ch << "' occurs " << result << " time(s) in \"" << str << "\"." << endl;

    return 0;
}

// ----------------------------------------------------------------------------------------------------
// without cctype

#include <iostream>
#include <cstring>
using namespace std;

// Helper function: returns lowercase equivalent of an ASCII letter without <cctype>
char to_lower_manual(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    } else {
        return ch;
    }
}

// Returns the number of occurrences of ch (case-insensitive) in str
int count_char_occurrences(const char *str, char ch) {
    int count = 0;
    char target = to_lower_manual(ch);

    while (*str) {
        if (to_lower_manual(*str) == target) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[200], ch;

    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    
    // Remove newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    cout << "Enter the character to count: ";
    cin >> ch;

    int result = count_char_occurrences(str, ch);
    cout << "The character '" << ch << "' occurs " << result << " time(s) in \"" << str << "\"." << endl;

    return 0;
}
