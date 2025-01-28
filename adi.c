// #include <stdio.h>
// #include <NAMA.H>
// #include <AOT.H>
// int main()
// {
//     double k, n, j, k1, j1;
//     printf("Enter any Value:- ");
//     scanf("%lf", &n);

//     k = SQR(n);

//     printf("\n%lf", k);
//     printf("\n*\n");

//     printf("Enter Height:- ");
//     scanf("%lf", &j);

//     printf("Enter Width:- ");
//     scanf("%lf", &j1);

//     k1 = AT(j, j1);
//     printf("\nArea of T= %lf", k1);
//     return 0;
// }

#include <stdio.h>
#include <math.h> // For sqrt() function

// Function to calculate area of a triangle
double AreaOfTriangle(double height, double width) {
    return 0.5 * height * width; // Area formula for a triangle
}

int main() {
    double k, n, j, k1, j1;

    // Ask user for value and calculate square
    printf("Enter any Value: ");
    scanf("%lf", &n);
    k = n * n;  // Calculate square of n
    printf("\nSquare of %.2lf is %.2lf", n, k);
    
    printf("\n*\n");

    // Ask user for height and width to calculate area of triangle
    printf("Enter Height: ");
    scanf("%lf", &j);

    printf("Enter Width: ");
    scanf("%lf", &j1);

    k1 = AreaOfTriangle(j, j1);  // Calculate area of triangle
    printf("\nArea of Triangle = %.2lf", k1);

    return 0;
}
