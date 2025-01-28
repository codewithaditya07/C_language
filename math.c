// #include <stdio.h>
// #include <math.h>  // For sqrt() if needed

// // Function to calculate square
// double SQR(double n) {
//     return n * n;
// }

// // Function to calculate area of a triangle
// double AT(double height, double width) {
//     return 0.5 * height * width; // Area formula for a triangle
// }

// int main() {
//     double k, n, j, k1, j1;

//     // Prompt user to enter a value for n
//     printf("Enter any Value: ");
//     scanf("%lf", &n);

//     // Calculate square of the number n
//     k = SQR(n);

//     // Output the result of square
//     printf("\nSquare of %.2lf is %.2lf", n, k);
//     printf("\n*\n");

//     // Prompt user to enter height and width for area calculation
//     printf("Enter Height: ");
//     scanf("%lf", &j);

//     printf("Enter Width: ");
//     scanf("%lf", &j1);

//     // Calculate area of triangle using AT function
//     k1 = AT(j, j1);

//     // Output the area of the triangle
//     printf("\nArea of Triangle = %.2lf", k1);

//     return 0;
// }

#include <stdio.h>

// Function to calculate square
double SQR(double n)
{
    return n * n;
}

// Function to calculate area of a triangle
double AT(double height, double width)
{
    return 0.5 * height * width; // Area formula for a triangle
}

int main() 
{
    double k, n, j, k1, j1;

    // Prompt user to enter a value for n
    printf("Enter any Value: ");
    scanf("%lf", &n);

    // Calculate square of the number n
    k = SQR(n);

    // Output the result of square
    printf("\nSquare of %.2lf is %.2lf", n, k);
    printf("\n*\n");

    // Prompt user to enter height and width for area calculation
    printf("Enter Height: ");
    scanf("%lf", &j);

    printf("Enter Width: ");
    scanf("%lf", &j1);

    // Calculate area of triangle using AT function
    k1 = AT(j, j1);

    // Output the area of the triangle
    printf("\nArea of Triangle = %.2lf", k1);

    return 0;
}
