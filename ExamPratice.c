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

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))

int main() {
    int num = 3;
    printf("Cube of %d is %d\n", num, CUBE(num));  // Output: 27

    // Test with expression
    printf("Cube of (2 + 1) is %d\n", CUBE(2 + 1)); // Output: 27

    return 0;
}


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
