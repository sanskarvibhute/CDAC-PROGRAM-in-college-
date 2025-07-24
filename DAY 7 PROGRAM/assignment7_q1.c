/* Q.1. Write a function to return number of occurances of given character in a string irrespective of case. */

#include <stdio.h>
#include <ctype.h>

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

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Enter the character to count: ");
    scanf(" %c", &ch); 

    int result = count_char_occurrences(str, ch);

    printf("The character '%c' occurs %d time(s) in \"%s\".\n", ch, result, str);

    return 0;
}

// ----------------------------------------------------------------------------------------------------
// without ctype.h

#include <stdio.h>
#include <string.h>

// Helper function: returns lowercase equivalent of an ASCII letter without <ctype.h>
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

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    int result = count_char_occurrences(str, ch);
    printf("The character '%c' occurs %d time(s) in \"%s\".\n", ch, result, str);

    return 0;
}
