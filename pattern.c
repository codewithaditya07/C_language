// pattern in for loop
/*#include<stdio.h>
int main (){

int x,y;
for (x=1;x<=10;x++)
{
    for(y=1;y<=10-x;y++)

{
printf("*");
}
{
    printf("\n");
}
}
    return 0;
}*/
// pattern in while loop
#include <stdio.h>
int main()
{
    int x, y;
    x = 1;
    while (x <= 10)
    {
    
        y = 1;
        while (y <=  x)
        {
            printf("*");
            y++;
        }
        printf("\n");
        x++;
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int i, j, k;
//     int n = 4; // Number of rows before the middle line

//     // Upper half (including middle line)
//     for (i = 1; i <= n; i++) {
//         // Print spaces
//         for (j = i; j < n; j++) {
//             printf("  ");
//         }

//         // Print decreasing numbers
//         for (j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         // Print increasing numbers
//         for (j = 2; j <= i; j++) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     // Lower half
//     for (i = n - 1; i >= 1; i--) {
//         // Print spaces
//         for (j = i; j < n; j++) {
//             printf("  ");
//         }

//         // Print decreasing numbers
//         for (j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }

//         // Print increasing numbers
//         for (j = 2; j <= i; j++) {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }
