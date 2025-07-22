#include <iostream>
#include <iomanip>// For output formatting (setprecision)
#include <limits>    // For clearing the input buffer (numeric_limits)
using namespace std;

int main() {
    float marks[5];
    float total_marks = 0;
    float average;

    cout << "Enter marks for five subjects (0-100):" << endl;

    // Input validation loop for all 5 subjects
    for (int i = 0; i < 5; i++) {
        while (true) { // Infinite loop, will break once valid input is received
            cout << "Enter marks for Subject " << (i + 1) << ": ";
            
            if (cin >> marks[i]) {
                // Validate if marks are within valid range
                if (marks[i] >= 0 && marks[i] <= 100) {
                    break; // Valid input received
                } else {
                    cout << "Invalid input: Marks must be between 0 and 100." << endl;
                }
            } else {
                cout << "Invalid input: Please enter a numeric value." << endl;
                
                // Clear error flags and ignore invalid input
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    // Calculate total marks
    for (int i = 0; i < 5; i++) {
        total_marks += marks[i];
    }

    // Calculate average
    average = total_marks / 5.0f;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nThe total marks are: " << total_marks << endl;
    cout << "The average marks of the five subjects is: " << average << endl;

    return 0;
}
