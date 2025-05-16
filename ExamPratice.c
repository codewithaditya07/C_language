// #include <stdio.h>

// int main() {
//     int A[3][3], B[3][3], C[3][3];
//     int i, j;

//     // Input first matrix
//     printf("Enter elements of first 3x3 matrix (A):\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     // Input second matrix
//     printf("Enter elements of second 3x3 matrix (B):\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }

//     // Subtract matrices: C = A - B
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             C[i][j] = A[i][j] - B[i][j];
//         }
//     }

//     // Display the result
//     printf("Resultant matrix after subtraction (A - B):\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int a = 5, b = -2;

//     if (a > 0 && b > 0)
//         printf("Both a and b are positive\n");
//     else
//         printf("Both are not positive\n");

//     if (a > 0 || b > 0)
//         printf("At least one is positive\n");

//     if (!(b > 0))
//         printf("b is not positive\n");

//     return 0;
// }

// #include <stdio.h>

// #define CUBE(x) ((x) * (x) * (x))

// int main() {
//     int num = 3;
//     printf("Cube of %d is %d\n", num, CUBE(num));  // Output: 27

//     // Test with expression
//     printf("Cube of (2 + 1) is %d\n", CUBE(2 + 1)); // Output: 27

//     return 0;
// }


// #include <stdio.h>

// #define SQUARE(x) ((x) * (x))  // macro definition

// int main() {
//     int a = 5;
//     printf("Square: %d\n", SQUARE(a));  // becomes ((5)*(5))
//     return 0;
// }

// Write a Function in C for String Concatenation (Without using inbuilt functions like strcat):
// #include <stdio.h>

// // Function to concatenate two strings
// void concatenate(char str1[], char str2[]) {
//     int i = 0, j = 0;

//     // Move to the end of the first string
//     while (str1[i] != '\0') {
//         i++;
//     }

//     // Append characters of str2 to str1
//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }

//     // Add null terminator at the end
//     str1[i] = '\0';
// }

// int main() {
//     char str1[100] = "Hello ";
//     char str2[] = "World!";

//     concatenate(str1, str2);
//     printf("Concatenated String: %s\n", str1);

//     return 0;
// }

// Write a C program which read an array of ten integer values and search a given value in the array. If that value exist in the array
// display its square otherwise display. “The value is missing.”

// #include <stdio.h>

// int main() {
//     int array[10];
//     int i, value, found = 0;

//     printf("Enter 10 integer values:\n");
//     for(i = 0; i < 10; i++) {
//         scanf("%d", &array[i]);
//     }

//     // Reading the value to search
//     printf("Enter a value to search: ");
//     scanf("%d", &value);

//     // Searching the value in the array
//     for(i = 0; i < 10; i++) {
//         if(array[i] == value) {
//             found = 1;
//             break;
//         }
//     }

//     // Output based on search result
//     if(found) {
//         printf("Square of %d is %d\n", value, value * value);
//     } else {
//         printf("The value is missing.\n");
//     }

//     return 0;
// }


// Write a C program for multiplication of two 4 × 4 matrices
// #include <stdio.h>

// #define SIZE 4

// int main() {
//     int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];
//     int i, j, k;

//     // Input first matrix
//     printf("Enter elements of first 4x4 matrix:\n");
//     for(i = 0; i < SIZE; i++) {
//         for(j = 0; j < SIZE; j++) {
//             printf("A[%d][%d]: ", i, j);
//             scanf("%d", &A[i][j]);
//         }
//     }

//     // Input second matrix
//     printf("\nEnter elements of second 4x4 matrix:\n");
//     for(i = 0; i < SIZE; i++) {
//         for(j = 0; j < SIZE; j++) {
//             printf("B[%d][%d]: ", i, j);
//             scanf("%d", &B[i][j]);
//         }
//     }

//     // Initialize result matrix to 0
//     for(i = 0; i < SIZE; i++) {
//         for(j = 0; j < SIZE; j++) {
//             result[i][j] = 0;
//         }
//     }

//     // Matrix multiplication
//     for(i = 0; i < SIZE; i++) {
//         for(j = 0; j < SIZE; j++) {
//             for(k = 0; k < SIZE; k++) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // Display result matrix
//     printf("\nResult of multiplication:\n");
//     for(i = 0; i < SIZE; i++) {
//         for(j = 0; j < SIZE; j++) {
//             printf("%5d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

.

.
.
.