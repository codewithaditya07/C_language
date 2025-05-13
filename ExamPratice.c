#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix (A):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix (B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtract matrices: C = A - B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display the result
    printf("Resultant matrix after subtraction (A - B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
