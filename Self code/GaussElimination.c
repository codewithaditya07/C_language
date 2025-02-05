// Write a program in C/C++ to find the solution of system of linear
// equations (given below), by using Gauss-Elimination method :  
// x y + g = 2
// x - 2y + 3z = 14
// x + 3y -- 6z = -23 

#include <stdio.h>
#include <math.h>

#define N 3

void gaussElimination(float a[N][N+1], float x[N]) {
    int i, j, k;
    float factor;

    for (i = 0; i < N; i++) {
    
        if (a[i][i] == 0.0) {
            printf("Divide by zero detected! The system might be singular.\n");
            return;
        }

        for (j = i + 1; j < N; j++) {
            factor = a[j][i] / a[i][i];

            for (k = 0; k < N + 1; k++) {
                a[j][k] = a[j][k] - factor * a[i][k];
            }
        }
    }

    for (i = N - 1; i >= 0; i--) {
        x[i] = a[i][N];  

        for (j = i + 1; j < N; j++) {
            x[i] = x[i] - a[i][j] * x[j];
        }

        x[i] = x[i] / a[i][i];  
    }
}

int main() {
    float a[N][N+1] = {
        {1, 1, 0, 2},   // x + y = 2
        {1, -2, 3, 14}, // x - 2y + 3z = 14
        {1, 3, -6, -23} // x + 3y - 6z = -23
    };
    float x[N]; 

    
    gaussElimination(a, x);

    // Print the solution
    printf("Solution of the system of equations:\n");
    for (int i = 0; i < N; i++) {
        printf("Variable x%d = %.2f\n", i + 1, x[i]);
    }

    return 0;
}
