/*Q1. Write function to check whether given year is leap or not. Write another function to print number of days in given month. */

#include <iostream>
using namespace std;

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
            cout << "Invalid month" << endl;
            return;
    }
    cout << "Number of days in month " << month << " of year " << year << ": " << days << endl;
}

int main() {
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;

    if (isLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    printDaysInMonth(month, year);

    return 0;
}

/* much harder approach will be 
#include <iostream>
using namespace std;

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
    string monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    
    // Check if month is valid
    if (month < 1 || month > 12) {
        cout << "Invalid month! Please enter month between 1-12." << endl;
        return;
    }
    
    // Get days from array (month-1 because array is 0-indexed)
    days = daysInMonth[month - 1];
    
    // Special case for February in leap year
    if (month == 2 && isLeapYear(year)) {
        days = 29;
    }
    
    cout << monthNames[month - 1] << " " << year << " has " << days << " days." << endl;
}

// Main function to demonstrate the usage
int main() {
    int year, month;
    
    cout << "=== Leap Year and Days in Month Calculator ===" << endl << endl;
    
    // Test leap year function
    cout << "Enter a year to check if it's leap: ";
    cin >> year;
    
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl << endl;
    } else {
        cout << year << " is not a leap year." << endl << endl;
    }
    
    // Test days in month function
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    
    printDaysInMonth(month, year);
    
    // Additional examples
    cout << endl << "=== Some Examples ===" << endl;
    printDaysInMonth(2, 2024);  // February in leap year
    printDaysInMonth(2, 2023);  // February in non-leap year
    printDaysInMonth(4, 2024);  // April
    printDaysInMonth(12, 2024); // December
    
    return 0;
}
*/

/* another much harder approach
#include <iostream>
using namespace std;

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
    string monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    
    int days = getDaysInMonth(month, year);
    
    if (days == -1) {
        cout << "Invalid month! Please enter month between 1-12." << endl;
        return;
    }
    
    cout << monthNames[month - 1] << " " << year << " has " << days << " days." << endl;
}

int main() {
    int year, month;
    
    cout << "Enter year: ";
    cin >> year;
    
    cout << "Enter month (1-12): ";
    cin >> month;
    
    // Check if year is leap
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    
    // Print days in month
    printDaysInMonth(month, year);
    
    return 0;
}
*/
