// 2. Write two different functions to find maximum and minimum of the array elements.
// Test Case 1: Positive Numbers
// Test Case 2: Negative Numbers
// Test Case 3: Mixed Numbers
// Test Case 4: Duplicate Maximum/Minimum
// Test Case 5: Single Element Array
// Test Case 6: Large Numbers
// Test Case 7: Floating Point Numbers
// Test Case 8: Empty Array
// Test Case 9: Null Array

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <vector>

using namespace std;

/**
 * @brief Finds the maximum value in a float array.
 * 
 * @param n The number of elements in the array.
 * @param arr The array of floats.
 * @return The maximum value, or NAN if the array is NULL or empty.
 */
float find_max(int n, float arr[]) {
    // Test Case 8 & 9: Handle Null Array and Empty Array
    if (arr == nullptr || n <= 0) {
        return NAN; // Return Not-a-Number to signal an error
    }

    float maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

/**
 * @brief Finds the minimum value in a float array.
 * 
 * @param n The number of elements in the array.
 * @param arr The array of floats.
 * @return The minimum value, or NAN if the array is NULL or empty.
 */
float find_min(int n, float arr[]) {
    // Test Case 8 & 9: Handle Null Array and Empty Array
    if (arr == nullptr || n <= 0) {
        return NAN; // Return Not-a-Number to signal an error
    }

    float minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

// Helper function to run and print a test case
void run_test_case(const string& name, int n, float arr[]) {
    cout << "--- " << name << " ---" << endl;
    if (arr != nullptr) {
        cout << "Array: ";
        for (int i = 0; i < n; i++) cout << fixed << setprecision(2) << arr[i] << " ";
        cout << endl;
    } else {
        cout << "Array: NULL" << endl;
    }
    
    float maxNum = find_max(n, arr);
    float minNum = find_min(n, arr);

    if (isnan(maxNum)) {
        cout << "Maximum: Error (Invalid input: empty or NULL array)" << endl;
    } else {
        cout << "Maximum: " << fixed << setprecision(2) << maxNum << endl;
    }

    if (isnan(minNum)) {
        cout << "Minimum: Error (Invalid input: empty or NULL array)" << endl;
    } else {
        cout << "Minimum: " << fixed << setprecision(2) << minNum << endl;
    }
    cout << endl;
}

int main() {
    cout << "--- Running Automated Test Cases ---" << endl << endl;

    // Test Case 1: Positive Numbers
    float test1[] = {10.5f, 20.2f, 5.1f, 30.0f, 15.8f};
    run_test_case("Test Case 1: Positive Numbers", 5, test1);

    // Test Case 2: Negative Numbers
    float test2[] = {-10.5f, -20.2f, -5.1f, -30.0f, -15.8f};
    run_test_case("Test Case 2: Negative Numbers", 5, test2);

    // Test Case 3: Mixed Numbers
    float test3[] = {-10.5f, 20.2f, -5.1f, 0.0f, 15.8f};
    run_test_case("Test Case 3: Mixed Numbers", 5, test3);

    // Test Case 4: Duplicate Maximum/Minimum
    float test4[] = {50.0f, 20.2f, 10.0f, 50.0f, 10.0f};
    run_test_case("Test Case 4: Duplicate Maximum/Minimum", 5, test4);

    // Test Case 5: Single Element Array
    float test5[] = {42.0f};
    run_test_case("Test Case 5: Single Element Array", 1, test5);

    // Test Case 6: Large Numbers
    float test6[] = {3.4e38f, 1.2e37f, -3.4e38f}; // Using large float values
    run_test_case("Test Case 6: Large Numbers", 3, test6);

    // Test Case 7: Floating Point Numbers (already handled by all tests)
    float test7[] = {0.1f, 0.005f, -0.02f, 0.101f};
    run_test_case("Test Case 7: Floating Point Numbers", 4, test7);

    // Test Case 8: Empty Array
    float test8[] = {}; // Dummy array, won't be accessed
    run_test_case("Test Case 8: Empty Array", 0, test8);

    // Test Case 9: Null Array
    run_test_case("Test Case 9: Null Array", 5, nullptr);

    // --- Original interactive part (now safer) ---
    cout << endl << "--- Running Interactive Test ---" << endl << endl;
    int n;
    cout << "Enter number of terms in array: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid number of terms. Must be a positive integer." << endl;
        return 1; // Exit with an error
    }

    // Using vector for dynamic array allocation (C++ style)
    vector<float> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element at position " << (i + 1) << ": ";
        cin >> arr[i];
    }

    float maxNum = find_max(n, arr.data());
    cout << fixed << setprecision(2);
    cout << "Maximum value in the array = " << maxNum << endl;

    float minNum = find_min(n, arr.data());
    // Corrected the typo below ("Maximum" -> "Minimum")
    cout << "Minimum value in the array = " << minNum << endl;

    return 0;
}
