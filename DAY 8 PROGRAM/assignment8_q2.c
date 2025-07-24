/* Q2. Write functions to calculate addition, subtraction and multiplication of two 3 X 3 matrix */

#include <stdio.h>

// Function to input a 3x3 matrix
void input_matrix(int matrix[3][3], char name[]) {
    printf("Enter elements for matrix %s (3x3):\n", name);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
}

// Function to add two 3x3 matrices
void add_matrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to subtract two 3x3 matrices
void subtract_matrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

// Function to multiply two 3x3 matrices
void multiply_matrices(int a[3][3], int b[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Function to print a matrix
void print_matrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    
    // Input matrices from user
    input_matrix(matrix1, "A");
    input_matrix(matrix2, "B");
    
    printf("Matrix A:\n");
    print_matrix(matrix1);
    
    printf("Matrix B:\n");
    print_matrix(matrix2);
    
    // Addition
    add_matrices(matrix1, matrix2, result);
    printf("A + B =\n");
    print_matrix(result);
    
    // Subtraction
    subtract_matrices(matrix1, matrix2, result);
    printf("A - B =\n");
    print_matrix(result);
    
    // Multiplication
    multiply_matrices(matrix1, matrix2, result);
    printf("A * B =\n");
    print_matrix(result);
    
    return 0;
}
