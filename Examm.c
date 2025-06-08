// 1. Factorial Using Recursion
// #include <stdio.h>

// int factorial(int n) {
//     if (n <= 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Factorial of %d is %d\n", n, factorial(n));
//     return 0;
// }

// 2. String Length Without Using strlen()
// #include <stdio.h>

// int stringLength(char str[]) {
//     int i = 0;
//     while (str[i] != '\0') {
//         i++;
//     }
//     return i;
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("Length of the string is %d\n", stringLength(str));
//     return 0;
// }

// 3. Check Palindrome Using Pointers
// #include <stdio.h>
// #include <string.h>

// int isPalindrome(char *str) {
//     char *end = str + strlen(str) - 1;
//     while (str < end) {
//         if (*str != *end)
//             return 0;
//         str++;
//         end--;
//     }
//     return 1;
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     if (isPalindrome(str))
//         printf("Palindrome\n");
//     else
//         printf("Not Palindrome\n");
//     return 0;
// }


// 4. Copy Contents from One File to Another
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *source, *dest;
//     char ch, sourceName[100], destName[100];

//     printf("Enter source file name: ");
//     scanf("%s", sourceName);
//     source = fopen(sourceName, "r");
//     if (source == NULL) {
//         printf("Cannot open source file.\n");
//         return 1;
//     }

//     printf("Enter destination file name: ");
//     scanf("%s", destName);
//     dest = fopen(destName, "w");
//     if (dest == NULL) {
//         printf("Cannot open destination file.\n");
//         fclose(source);
//         return 1;
//     }

//     while ((ch = fgetc(source)) != EOF)
//         fputc(ch, dest);

//     printf("File copied successfully.\n");
//     fclose(source);
//     fclose(dest);
//     return 0;
// }

// 5. Matrix Multiplication (3x3)
// #include <stdio.h>

// int main() {
//     int A[3][3], B[3][3], C[3][3], i, j, k;

//     printf("Enter elements of Matrix A (3x3):\n");
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//             scanf("%d", &A[i][j]);

//     printf("Enter elements of Matrix B (3x3):\n");
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++)
//             scanf("%d", &B[i][j]);

//     // Multiply A * B
//     for (i = 0; i < 3; i++)
//         for (j = 0; j < 3; j++) {
//             C[i][j] = 0;
//             for (k = 0; k < 3; k++)
//                 C[i][j] += A[i][k] * B[k][j];
//         }

//     printf("Resultant Matrix C:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++)
//             printf("%d ", C[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// 6. Gross & Net Salary Calculation using Structure
// #include <stdio.h>

// struct Salary {
//     float basic, ta, da, hra, deductions;
// };

// int main() {
//     struct Salary emp;
//     float gross, net;

//     printf("Enter Basic, TA, DA, HRA, Deductions:\n");
//     scanf("%f%f%f%f%f", &emp.basic, &emp.ta, &emp.da, &emp.hra, &emp.deductions);

//     gross = emp.basic + emp.ta + emp.da + emp.hra;
//     net = gross - emp.deductions;

//     printf("Gross Salary = %.2f\n", gross);
//     printf("Net Salary = %.2f\n", net);

//     return 0;
// }

// 7. Swapping Two Numbers using Pointers
// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &x, &y);

//     printf("Before Swap: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After Swap: x = %d, y = %d\n", x, y);

//     return 0;
// }

// Q1. (10 Marks) Write a recursive function to calculate the factorial of a number.
// #include <stdio.h>
// int factorial(int n) {
//     if (n <= 1) return 1;
//     return n * factorial(n - 1);
// }
// int main() {
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     printf("Factorial: %d\n", factorial(num));
//     return 0;
// }

// Q2. (10 Marks) Check whether a string is a palindrome using pointers.
// #include <stdio.h>
// #include <string.h>

// int isPalindrome(char *str) {
//     char *end = str + strlen(str) - 1;
//     while (str < end) {
//         if (*str != *end) return 0;
//         str++;
//         end--;
//     }
//     return 1;
// }
// int main() {
//     char str[100];
//     printf("Enter string: ");
//     scanf("%s", str);
//     if (isPalindrome(str)) printf("Palindrome\n");
//     else printf("Not Palindrome\n");
//     return 0;
// }

// Q3. (10 Marks) Copy contents from one file to another.
#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
    if (!f1 || !f2) {
        printf("File Error\n");
        return 1;
    }
    while ((ch = fgetc(f1)) != EOF) fputc(ch, f2);
    printf("File copied successfully.\n");
    fclose(f1);
    fclose(f2);
    return 0;
}
