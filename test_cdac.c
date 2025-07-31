/* Question:
Write menu driven C program to perform following tasks
1. Count number of words in given string.
2. Find rank of given number in an array.
3. Check given matrix is magic square or not.
4. Print Quadrant of a given point
5. Find distance between two points
Define a structure point with x and y coordinate.
Rank: rank of a given integer x, in an array is total number of elements less than or equal to x
(including x)


        | 2 | 7 | 6 |        
mat =   | 9 | 5 | 1 |         is a magic square (addition of any row/col/diagonal is same)
        | 4 | 3 | 8 |        
 */

/*OVER ALL ALGORITHM 
1.START
2.CHECK INPUT FROM USER TO WHICH PROBLEM SHOULD BE SOLVED
3.BY SWICH ADRESS THE PERETICULAR EXAMPLE
4.EXECUTE THE PROGRAM 
5.EXIT 
*/

/*Q1.count numbers in given string 
//ALGORITHMS -->
 1.START
 2.DECLEAR STRING 
 3. TAKE STRING IN DECLERED VERSION  
 4.CHECK UNTILL IF THERE IS NULL TURMENATING CHARACTER (\0)  IS PRESENT 
 5.NEXT LINE CHARACTER CONVERT IT TO NULL TERMENATING CHARACTER 
 6.CHECK LETTERS IN  WORDS IN GIVEN STRING ONE BY ONE 
 7.WHILE NUMBER IS PRESENT INCREASE COUNT OF NUMBERS
 8.RETURN COUNT OF NUMBERS WORD 
 9.END
*/



/*Q2. Find rank of given number in an array
//ALGORITHMS -->
 1. start 
 2. declear array (with taking input array size)
 3. take input array
 4.analyse arry elements one by one 
 5.take input number to find rank 
 6.check arry elements one by one 
 7.count when we get element in array at pertiular position 
 8.display its positon of 1st occurence if present 
 9.if not present display not present 
 10.EXIT 
*/

/*Q3. Check given matrix is magic square or not. 
//ALGORITHMS -->
 1.START
 2.TAKE INPUT SIZE OF MATRIX IN TERM OF ROW & COLUMN (M*N)
 3.CONDITION CHECK FOR NUMBERS MUST POSITIVE & THOSE ARE LESS THAN 10 FOR EASE OF READIABILITYB 
 4.INPUT NUMBERS FOR MATRIX FOR FURTHER CHECK
 5.CHECK SUM OF DIGONAL ELEMENTS & ITS SUM OF RESPEECTIVE MATRIX (PRIMARY & SECONDATY ALSO)
 6.BOUTH SUM OF PRIMARY & SECONDARY MATRIX DIGONAL SHOULD BE EQUAL IF NOT RETURN NOT MAGIC SQUARE 
 7.CHECK SUM OF COLUMNS AS WELL AS SUM OF ROWS 
 8.IF THEY ARE NOT EQUAL RETURN NOT MAGIC SQUARE 
 9.IF CONDITION 8 & 5 SATISFY AND THOSE ARE EQUAL RETURN THAT IS MAGIC SQUARE MATRIX
 10.EXIT
*/

/*Q4. Print Quadrant of a given point 
//ALGORITHMS -->
 1.START 
 2.TAKE POSITION OF POINT IN QUADERENT 
 3.POSITION SHOULD IN (X & Y) AXIS TERM OF MATHEMATICAL OPERATION
 4.IF BOUTH QUADRENT POINT (X & Y) POSITIVE RETURN IT'S IN 1ST QUADRENT  
 5.IF Y IS POSITIVE & X IS NEGATIVE THEN IT IS IN 2ND QUADERENT 
 6.IF Y IS NEGATIVE & ALSO X IS NEGATIVE THEN RETURN 3RD QUADRENT 
 7.IF Y IS NEGATIVE & X IS POSITIVE  RETURN 4 TH QUADRENT 
 8.IF BOUTH 0 RETURN ORIGIN	
 9.ELSE ENVALID INPUT 
 10.EXIT
*/

/*Q5. Find distance between two points 
//ALGORITHMS -->
 1.START 
 2.TAKE INPUT POSITION OF POINTS RESPECTIVE GEOMETRIC POSITION RESPECTIVE TO CORDINATE AXIS X & Y REPRESENTATION
 3.TAKE FIRST PONIT THEN SECOND 
 4.BY USING FORMULA CALCULATE Distance between two points 
 5.DISPLAY RESULT OF CALCULATION (THE DISTANCE) 
 6.EXIT */
//*************************************




#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

//*******************************************************************************************

bool isMagicSquare(int mat[][3], int n) {
    int sumd1 = 0, sumd2 = 0;

    // Sum of primary diagonal
    for (int i = 0; i < n; i++) {
        sumd1 += mat[i][i];
    }

    // Sum of secondary diagonal
    for (int i = 0; i < n; i++) {
        sumd2 += mat[i][n - 1 - i];
    }

    if (sumd1 != sumd2)
        return false;

    // Check sums of all rows and columns
    for (int i = 0; i < n; i++) {
        int sumr = 0, sumc = 0;
        for (int j = 0; j < n; j++) {
            sumr += mat[i][j];
            sumc += mat[j][i];
        }
        if (sumr != sumd1 || sumc != sumd1)
            return false;
    }

    return true;
}


//*****************************************************************************

int main() {
    int num;
    
    printf("Enter num 1 to 5 for respective function:\n");
    printf("Enter num 1: Q1.count numbers in given string\n");
    printf("Enter num 2: Q2. Find rank of given number in an array\n");
    printf("Enter num 3: Q3.Check given matrix is magic square or not\n");
    printf("Enter num 4: Q4. Print Quadrant of a given point\n");
    printf("Enter num 5: Q5. Find distance between two points\n");
        
    scanf("%d", &num);
    
    switch (num) {
    
    case 1: {
        char s[] = "idher100CopHai"; //EXAMPLE
        int count = 0;
        int input_number = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (isdigit(s[i])) {
                if (!input_number) {
                    // Start of a new number
                    count++;
                    input_number = 1;
                }
           } else {
                input_number = 0;
             }
        }

        printf("Number of numbers in string: %d\n", count);  // Output: 3
        break; 
    }
//*********************************************
    case 2: {
        int n, i, j;
    
        printf("Enter the size of the array: ");
        scanf("%d", &n);
    
        int arr[n];
        printf("Enter %d elements:\n", n);
        for(i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    
        int num_to_find;
        printf("Enter the number to find the rank: ");
        scanf("%d", &num_to_find);
    
        // Find count of numbers greater than the given number
        int count_greater = 0;
        for(i = 0; i < n; i++) {
            if(arr[i] > num_to_find) {
                count_greater++;
            }
        }
    
        // Rank is number of elements greater than num + 1
        int rank = count_greater + 1;
    
        // Check if num exists in array or not
        int exists = 0;
        for(i = 0; i < n; i++) {
            if(arr[i] == num_to_find) {
                exists = 1;
                break;
            }
        }
    
        if(exists) {
            printf("Rank of %d in the array is: %d\n", num_to_find, rank);
        } else {
            printf("%d is not present in the array.\n", num_to_find);
        }
        break;
    }
    

//*******************************************************************
    case 3: {
         int n;
         printf("Enter the size of the matrix (n x n): ");
         scanf("%d", &n);

        if (n <= 0 || n > 3) {
             printf("Matrix size must be between 1 and 3.\n");
             return 1;
        }

         int mat[3][3];
         printf("Enter the elements of matrix:\n");
          for (int i = 0; i < n; i++) {
              for (int j = 0; j < n; j++) {
                  scanf("%d", &mat[i][j]);
            }
        }

         if (isMagicSquare(mat, n)) {
             printf("The given matrix is a magic square.\n");
         } else {
              printf("The given matrix is not a magic square.\n");
        }
        break; 
    }

//*********************************************************************
    case 4: {
        int x, y;
        printf("Enter values of point determination respective to x & y coordinate respectively: ");
        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0){
            printf("It is in 1st quadrant\n");
        }     
        else if(x < 0 && y > 0){
            printf("It is in 2nd quadrant\n");
        }
        else if(x < 0 && y < 0){
            printf("It is in 3rd quadrant\n");
        }
        else if(x > 0 && y < 0){
            printf("It is in 4th quadrant\n");
        }
        else if(y == 0 && x == 0){
            printf("It is at origin\n");
        }  
        else{
            printf("Please enter valid input\n"); 
        }
        break; 
    }

//*******************************************************************
    case 5: {
        int x1, y1, x2, y2;
        printf("Enter x & y coordinate respective to 1st point: ");
        scanf("%d %d", &x1, &y1);
        printf("Enter x & y coordinate respective to 2nd point: ");
        scanf("%d %d", &x2, &y2);
 
        double dist;
        dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

        printf("The distance between points (%d,%d) & (%d,%d) is = %f\n", x1, y1, x2, y2, dist);
        break; 
    }

//********************************************************************

    default:
        printf("Please enter valid number (1-5)\n");
        break;
    }

    return 0;
}

//*************************************************






