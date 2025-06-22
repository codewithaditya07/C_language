//  1. Linear Search in Array
// #include <stdio.h>

// int main() {
//     int arr[100], n, i, key, found = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter array elements: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     printf("Enter element to search: ");
//     scanf("%d", &key);

//     for (i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             printf("Element found at position %d\n", i + 1);
//             found = 1;
//             break;
//         }
//     }

//     if (!found)
//         printf("Element not found.\n");

//     return 0;
// }

// 2. Binary Search in Array
#include <stdio.h>

int main() {
    int arr[100], n, i, key, low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found.\n");
    return 0;
}