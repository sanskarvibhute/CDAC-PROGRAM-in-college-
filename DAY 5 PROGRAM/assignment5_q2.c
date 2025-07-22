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

#include <stdio.h> 


float findMax(int n, float arr[]) {
    
    float maxVal = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; 
        }
    }
    return maxVal; 
}


float findMin(int n, float arr[]) {

    float minVal = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i]; 
        }
    }
    return minVal;
}

int main() {
    int n; 
  
    printf("Enter number of terms in array: ");
    scanf("%d", &n); 


    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1; 
    }

    float arr[n];


    for (int i = 0; i < n; i++) {
        printf("Enter element at position %d: ", i + 1);
        scanf("%f", &arr[i]); 
    }


    float maxNum = findMax(n, arr);
    printf("Maximum value in the array = %.2f\n", maxNum); 

  
    float minNum = findMin(n, arr);
    printf("Minimum value in the array = %.2f\n", minNum); 
    return 0; 
}
