/*Q1. Write function to check whether given year is leap or not. Write another function to print number of days in given month. */

#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

void printDaysInMonth(int month, int year) {
    int days;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (isLeapYear(year))
                days = 29;
            else
                days = 28;
            break;
        default:
            printf("Invalid month\n");
            return;
    }
    printf("Number of days in month %d of year %d: %d\n", month, year, days);
}

int main() {
    int year, month;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    printDaysInMonth(month, year);

    return 0;
}


/* much harder approach will be 
#include <stdio.h>

// Function to check if a year is leap year or not
int isLeapYear(int year) {
    // A year is leap if:
    // 1. It is divisible by 4 AND not divisible by 100
    // 2. OR it is divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

// Function to print number of days in a given month
void printDaysInMonth(int month, int year) {
    int days;
    
    // Array to store days in each month (for non-leap year)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Month names for better output
    char monthNames[][12] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    
    // Check if month is valid
    if (month < 1 || month > 12) {
        printf("Invalid month! Please enter month between 1-12.\n");
        return;
    }
    
    // Get days from array (month-1 because array is 0-indexed)
    days = daysInMonth[month - 1];
    
    // Special case for February in leap year
    if (month == 2 && isLeapYear(year)) {
        days = 29;
    }
    
    printf("%s %d has %d days.\n", monthNames[month - 1], year, days);
}

// Main function to demonstrate the usage
int main() {
    int year, month;
    
    printf("=== Leap Year and Days in Month Calculator ===\n\n");
    
    // Test leap year function
    printf("Enter a year to check if it's leap: ");
    scanf("%d", &year);
    
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n\n", year);
    } else {
        printf("%d is not a leap year.\n\n", year);
    }
    
    // Test days in month function
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    printDaysInMonth(month, year);
    
    // Additional examples
    printf("\n=== Some Examples ===\n");
    printDaysInMonth(2, 2024);  // February in leap year
    printDaysInMonth(2, 2023);  // February in non-leap year
    printDaysInMonth(4, 2024);  // April
    printDaysInMonth(12, 2024); // December
    
    return 0;
}
*/
/* another much harder apporoach
#include <stdio.h>

// Function to check if a year is leap year or not
int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to return number of days in a given month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month < 1 || month > 12) {
        return -1; // Invalid month
    }
    
    if (month == 2 && isLeapYear(year)) {
        return 29; // February in leap year
    }
    
    return daysInMonth[month - 1];
}

// Function to print number of days in a given month
void printDaysInMonth(int month, int year) {
    char monthNames[][12] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    
    int days = getDaysInMonth(month, year);
    
    if (days == -1) {
        printf("Invalid month! Please enter month between 1-12.\n");
        return;
    }
    
    printf("%s %d has %d days.\n", monthNames[month - 1], year, days);
}

int main() {
    int year, month;
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    // Check if year is leap
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    // Print days in month
    printDaysInMonth(month, year);
    
    return 0;
}
*/