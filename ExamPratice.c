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

// #include <stdio.h>

// int main() {
//     // Initialize an array of 3 strings (names)
//     char names[3][20] = {"Alice", "Bob", "Charlie"};

//     // Display the names
//     for (int i = 0; i < 3; i++) {
//         printf("%s\n", names[i]);
//     }

//     return 0;
// }

// Write a C program to find the largest and the smallest numbers in a given single
// dimensional array of "n" numerical values.
// #include <stdio.h>

// int main() {
//     int n, i;
//     int arr[100]; // assuming max size is 100
//     int largest, smallest;

//     // Input array size
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     // Input array elements
//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize largest and smallest
//     largest = smallest = arr[0];

//     // Loop to find largest and smallest
//     for(i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             largest = arr[i];
//         }
//         if(arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     // Output results
//     printf("Largest number: %d\n", largest);
//     printf("Smallest number: %d\n", smallest);

//     return 0;
// }


// What is a string ? Write a function in C to 10 convert lower case letters to upper case
// letters in a given string without using strupp ?

// #include <stdio.h>

// void toUpperCase(char str[]) {
//     int i = 0;
//     while (str[i] != '\0') {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 32; // Convert to uppercase by subtracting 32
//         }
//         i++;
//     }
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     gets(str);  // Use fgets() instead of gets() in modern code for safety

//     toUpperCase(str);

//     printf("Uppercase string: %s\n", str);

//     return 0;
// }

// Write a 'C' program that will enter a line of 10 text, store it in an array and then display
// backwards. The length of the line should be undefined (being terminated by ENTER key), but less than 80 characters

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[80];  // array to store the string (max 79 characters + '\0')
//     int i;

//     printf("Enter a line of text (less than 80 characters): ");
//     fgets(str, sizeof(str), stdin);  // read input including spaces

//     // Remove the newline character at the end if present
//     int len = strlen(str);
//     if (str[len - 1] == '\n') {
//         str[len - 1] = '\0';
//         len--;
//     }

//     printf("Text in reverse: ");
//     for (i = len - 1; i >= 0; i--) {
//         putchar(str[i]);
//     }

//     printf("\n");
//     return 0;
// }

// Explain recursion program with a suitable example.

// #include <stdio.h>

// // Recursive function to calculate factorial
// int factorial(int n) {
//     if (n == 0) {
//         return 1; // base case
//     } else {
//         return n * factorial(n - 1); // recursive call
//     }
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int result = factorial(num);
//     printf("Factorial of %d is %d\n", num, result);

//     return 0;
// }

// Macro Program Using #define, #if, #else
// #include <stdio.h>

// #define VALUE 10

// int main() {
//     #if VALUE > 5
//         printf("VALUE is greater than 5\n");
//     #else
//         printf("VALUE is 5 or less\n");
//     #endif

//     return 0;
// }

// What is pointer-to-pointer ? Explain the need of pointer-to-pointer with an example.
// Also show how the address of variable in this case is calculated and determined
// #include <stdio.h>

// int main() {
//     int a = 5;

//     int *p = &a;      // p points to a
//     int **pp = &p;    // pp points to p

//     printf("Value of a = %d\n", a);
//     printf("Value of a using *p = %d\n", *p);
//     printf("Value of a using **pp = %d\n", **pp);

//     printf("Address of a = %p\n", (void*)&a);
//     printf("Address stored in p = %p\n", (void*)p);
//     printf("Address of p = %p\n", (void*)&p);
//     printf("Address stored in pp = %p\n", (void*)pp);
    
//     return 0;
// }

// Explain briefly null pointer assignment. 6 Write a program in C to illustrate this concept.
// #include <stdio.h>

// int main() {
//     int *ptr = NULL;

//     if (ptr != NULL) {
//         printf("Value at ptr: %d\n", *ptr);
//     } else {
//         printf("Pointer is NULL. Cannot dereference.\n");
//     }

//     return 0;
// }

// Write a program to concatenate two strings without using the strcat( ) function.
// #include <stdio.h>

// int main() {
//     char str1[100], str2[50];
//     int i = 0, j = 0;

//     // Input the two strings
//     printf("Enter the first string: ");
//     gets(str1);  // Warning: gets() is unsafe, use fgets() in real applications

//     printf("Enter the second string: ");
//     gets(str2);

//     // Move to the end of str1
//     while (str1[i] != '\0') {
//         i++;
//     }

//     // Copy str2 to the end of str1
//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }

//     // Null-terminate the result
//     str1[i] = '\0';

//     // Print the concatenated string
//     printf("Concatenated string: %s\n", str1);

//     return 0;
// }

// prime no
// #include <stdio.h>

// int main() {
//     int x, a, f = 0;

//     printf("Enter any number: ");
//     scanf("%d", &x);

//     if (x <= 1) {
//         printf("Not prime\n");
//         return 0;
//     }

//     for (a = 2; a <= x / 2; a++) {
//         if (x % a == 0) {
//             f = 1;
//             break;
//         }
//     }

//     if (f == 0)
//         printf("It is prime\n");
//     else
//         printf("It is not prime\n");

//     return 0;
// }

// What is recursion ? Write a recursive 5 C program to find the factorial of a given number.
// #include <stdio.h>

// // Recursive function to calculate factorial
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1; // Base case
//     else
//         return n * factorial(n - 1); // Recursive call
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0)
//         printf("Factorial is not defined for negative numbers.\n");
//     else
//         printf("Factorial of %d is %d\n", num, factorial(num));

//     return 0;
// }

// What is a structure ? Explain how a 10 structure is declared in C. Write a program
// in C using structure to store records of students in a class of 20 students.

// #include <stdio.h>

// #define SIZE 20

// // Define the structure
// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student students[SIZE];

//     // Input student details
//     printf("Enter details of %d students:\n", SIZE);
//     for (int i = 0; i < SIZE; i++) {
//         printf("\nStudent %d:\n", i + 1);
//         printf("Enter roll number: ");
//         scanf("%d", &students[i].roll);
//         printf("Enter name: ");
//         scanf(" %[^\n]", students[i].name);  // Read string with spaces
//         printf("Enter marks: ");
//         scanf("%f", &students[i].marks);
//     }

//     // Display student details
//     printf("\n---- Student Records ----\n");
//     for (int i = 0; i < SIZE; i++) {
//         printf("Roll: %d, Name: %s, Marks: %.2f\n", 
//                students[i].roll, students[i].name, students[i].marks);
//     }

//     return 0;
// }

// Write a program using pointers, to swap the values of 2 variables.
// #include <stdio.h>

// // Function to swap values using pointers
// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;

//     // Input values
//     printf("Enter the value of x: ");
//     scanf("%d", &x);
//     printf("Enter the value of y: ");
//     scanf("%d", &y);

//     // Display values before swapping
//     printf("\nBefore swapping: x = %d, y = %d\n", x, y);

//     // Call swap function
//     swap(&x, &y);

//     // Display values after swapping
//     printf("After swapping: x = %d, y = %d\n", x, y);

//     return 0;
// }


// Swap Two Numbers Using Pointers
// #include <stdio.h>

// void swap(int *x, int *y) {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     swap(&a, &b);

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }

// Write C program which take a string as input and print it in reverse order, without using any in-built function.
// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0, i;

//     // Input string
//     printf("Enter a string: ");
//     gets(str);  // Note: gets is unsafe, prefer fgets in real applications

//     // Find length of string
//     while (str[length] != '\0') {
//         length++;
//     }

//     // Print string in reverse order
//     printf("Reversed string: ");
//     for (i = length - 1; i >= 0; i--) {
//         printf("%c", str[i]);
//     }

//     printf("\n");

//     return 0;
// }

// Swap Program using "Pass by Value" (Will NOT swap successfully)
// #include <stdio.h>

// // Pass by Value Function
// void swapByValue(int x, int y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a = 5, b = 10;

//     printf("Before swap: a = %d, b = %d\n", a, b);
//     swapByValue(a, b);
//     printf("After swap (Pass by Value): a = %d, b = %d\n", a, b);

//     return 0;
// }

// Swap Program using "Pass by Reference" (Correct swapping using pointers)
#include <stdio.h>

// Pass by Reference Function
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swapByReference(&a, &b);
    printf("After swap (Pass by Reference): a = %d, b = %d\n", a, b);

    return 0;
}
