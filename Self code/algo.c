// 1. Selection Sort with Comparison Count
#include <stdio.h>

int main() {
    int a[10] = {25, 5, 10, 4, 15, 20, 18, 12, 14, 7};
    int i, j, min, temp, comparisons = 0;

    for (i = 0; i < 9; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            comparisons++;
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    
    printf("\nTotal comparisons: %d\n", comparisons);
    return 0;
}

// 2. Bubble Sort
#include <stdio.h>

int main() {
    int a[] = {27, 5, 10, 8, 16, 2, 37};
    int n = 7, i, j, temp, comparisons = 0;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nTotal comparisons: %d\n", comparisons);
    return 0;
}

// 3. Linear Search
#include <stdio.h>

int main() {
    int arr[] = {9, 15, 22, 5, 4, 25, 28};
    int i, x = 28, found = 0;

    for (i = 0; i < 7; i++) {
        if (arr[i] == x) {
            found = 1;
            printf("Element %d found at index %d\n", x, i);
            break;
        }
    }

    if (!found)
        printf("Element not found.\n");
    return 0;
}

// 4. Binary Search
#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 22, 27, 30, 35};
    int low = 0, high = 7, mid, x = 22, comparisons = 0;

    while (low <= high) {
        comparisons++;
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            printf("Element %d found at index %d\n", x, mid);
            printf("Comparisons: %d\n", comparisons);
            return 0;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found.\n");
    return 0;
}

// 5. Fibonacci Series
#include <stdio.h>

int main() {
    int i, a = 0, b = 1, c;

    printf("Fibonacci Series: %d %d ", a, b);
    for (i = 2; i < 10; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}

// 6. Factorial
#include <stdio.h>

int main() {
    int n = 5, i;
    long long fact = 1;

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}

// 7. Matrix Multiplication (3x3)
#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int c[3][3], i, j, k;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Resultant Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
// 8. Reverse a String
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello";
    int i, len = strlen(str);
    char temp;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

// 9. Find Maximum and Minimum in an Array
#include <stdio.h>

int main() {
    int a[] = {5, 10, 15, 4, 3, 20, 25};
    int i, max = a[0], min = a[0];

    for (i = 1; i < 7; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}

// 10. Length of a String
#include <stdio.h>

int main() {
    char str[] = "IGNOU";
    int length = 0;

    while (str[length] != '\0')
        length++;

    printf("Length of the string is: %d\n", length);
    return 0;
}

// 11. Sum and Average of Array
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sum = 0, i;
    float avg;

    for (i = 0; i < 6; i++)
        sum += arr[i];

    avg = (float)sum / 6;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}

// 12. Copy One String to Another
#include <stdio.h>

int main() {
    char src[] = "IGNOU";
    char dest[100];
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("Copied string: %s\n", dest);
    return 0;
}

// 13. Palindrome Check
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "madam";
    int i, len = strlen(str), flag = 1;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

// 14. Exponentiation (x^n)
#include <stdio.h>

int main() {
    int x = 2, n = 5, result = 1;

    while (n > 0) {
        result *= x;
        n--;
    }

    printf("Result = %d\n", result);
    return 0;
}
