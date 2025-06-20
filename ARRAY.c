/*#include <stdio.h>
int main()
{
    int a[10], x;

    /*a[0]=98;
    a[1]=76;
    a[2]=87;
    a[3]=98;
    a[4]=a[0]+a[1]+a[2]+a[3];
    printf("%d",a[4]);

    for (x = 0; x < 10; x++)
    {
        printf("enter element of array ");
        scanf("%d", &a[x]);
    }
    printf("\n your array");
    for (x = 1; x < 10; x++)
    {
        printf("\n%d", a[x]);
    }

    return 0;
}*/
// input value from user and print array matrix
/*#include <stdio.h>
int main()
{
    int x[4][4], a, b;

    for (a = 0; a < 4; a++)
    {
        for (b = 0; b < 4; b++)
        {
            printf("Enter Any Values:- ");
            scanf("%d", &x[a][b]);
        }
    }

    printf("Array is\n");

    for (a = 0; a < 4; a++)
    {
        for (b = 0; b < 4; b++)
        {
            printf("%d ", x[a][b]);
        }
        printf("\n");
    }

    return 0;
}*/
//add
#include <stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3], x, y;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("Enter Element in 1st Array:- ");
            scanf("%d", &a[x][y]);
        }
    }

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("Enter Element in 2nd Array:- ");
            scanf("%d", &b[x][y]);
        }
    }

    // Sum Opration

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            c[x][y] = a[x][y] + b[x][y];
        }
    }

    printf("First Matrix\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }

    printf("Second Matrix\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", b[x][y]);
        }
        printf("\n");
    }

    printf("Final  Matrix\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d ", c[x][y]);
        }
        printf("\n");
    }
    return 0;
}

