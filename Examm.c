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
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    char *end = str + strlen(str) - 1;
    while (str < end) {
        if (*str != *end)
            return 0;
        str++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}