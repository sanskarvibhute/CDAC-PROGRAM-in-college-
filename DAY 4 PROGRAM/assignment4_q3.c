/* Q3. Write a function to calculate sum and product into a single function and print result in calling function.
(Do not use global variables for result) */


#include <stdio.h>

float sum_product(float n1, float n2, float*sum, float*product){
    *sum = n1 + n2;
    *product = n1 * n2;
}

int main() {
    float num1,num2,sum=0,product=0;

    printf("Enter first number:\t");
    scanf("%f", &num1);
    
    printf("Enter second number:\t");
    scanf("%f", &num2);
    
    sum_product(num1, num2, &sum, &product);
    printf("the sum of num %f and %f is = %f\n", num1, num2, sum);
    printf("the product of num %f and %f is = %f\n", num1, num2, product);
    
    return 0;
}

