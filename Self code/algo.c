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
