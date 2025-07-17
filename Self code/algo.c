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
