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

// Write a program and flowchart to display
// the following pattern in c :
// H
// He
// HeL
// HeLL
// HeLLO
// HeLL
// HeL
// He
// H

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char word[] = "HeLLO";
//     int len = strlen(word);

//     // Print top half including the full word
//     for (int i = 1; i <= len; i++) {
//         for (int j = 0; j < i; j++) {
//             printf("%c", word[j]);
//         }
//         printf("\n");
//     }

//     // Print bottom half
//     for (int i = len - 1; i >= 1; i--) {
//         for (int j = 0; j < i; j++) {
//             printf("%c", word[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Write a program to search an element in a
// given list of elements using linear search.

// #include <stdio.h>

// int main() {
//     int arr[100], n, i, key, found = 0;

//     // Input: number of elements
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     // Input: elements of array
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Input: element to search
//     printf("Enter the element to search: ");
//     scanf("%d", &key);

//     // Linear Search
//     for (i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             printf("Element found at position %d.\n", i + 1); // 1-based index
//             found = 1;
//             break;
//         }
//     }

//     if (!found) {
//         printf("Element not found in the list.\n");
//     }

//     return 0;
// }

// Write a macro to display the string COBOL
// in the following pattern.
// C
// CO
// COB
// COBO
// COBOL
// #include <stdio.h>
// #include <string.h>

// #define DISPLAY_COBOL_PATTERN()                  \
//     do {                                         \
//         char str[] = "COBOL";                    \
//         for (int i = 1; i <= strlen(str); i++) { \
//             for (int j = 0; j < i; j++) {        \
//                 printf("%c", str[j]);            \
//             }                                    \
//             printf("\n");                        \
//         }                                        \
//     } while (0)

// int main() {
//     DISPLAY_COBOL_PATTERN();
//     return 0;
// }


// Write a program in C, using structures to 7 generate a report for students which
// displays Roll No. and Name of student, total marks obtained by the student. Assumptions
// can be made wherever necessary.

// #include <stdio.h>
// #include <string.h>

// #define MAX 100

// // Structure definition
// struct Student {
//     int rollNo;
//     char name[50];
//     int marks[3];  // Assuming 3 subjects
// };

// // Function to calculate total marks
// int calculateTotal(struct Student s) {
//     int total = 0;
//     for (int i = 0; i < 3; i++) {
//         total += s.marks[i];
//     }
//     return total;
// }

// int main() {
//     struct Student students[MAX];
//     int n;

//     printf("Enter number of students: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("\nEnter details for student %d:\n", i + 1);
//         printf("Roll Number: ");
//         scanf("%d", &students[i].rollNo);
//         printf("Name: ");
//         scanf(" %[^\n]", students[i].name); // Read string with spaces

//         for (int j = 0; j < 3; j++) {
//             printf("Marks in subject %d: ", j + 1);
//             scanf("%d", &students[i].marks[j]);
//         }
//     }

//     // Display report
//     printf("\n--- Student Report ---\n");
//     printf("Roll No\tName\t\tTotal Marks\n");

//     for (int i = 0; i < n; i++) {
//         int total = calculateTotal(students[i]);
//         printf("%d\t%-15s%d\n", students[i].rollNo, students[i].name, total);
//     }

//     return 0;
// }

// Write a program that initialises 3 names in
// an array of strings and displays them.

#include <stdio.h>

int main() {
    // Initialize an array of 3 strings (names)
    char names[3][20] = {"Alice", "Bob", "Charlie"};

    // Display the names
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
