// if else condition in switch case
#include <stdio.h>
int main()
{
    int x;
    x = 1;

    switch (x)
    {
    case 1:
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a > b && a > c)
        {
            printf("A is greatest number\n");
        }
        else if (b > a && b > c)
        {
            printf("B is greatest number \n", b);
        }
        if (c > a && c > b)
        {
            printf("C is greatest number\n", c);
        }
        break;
    }
    case 2:
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a < b && a < c)
        {
            printf("A is lowest number\n");
        }
        else if (b < a && b < c)
        {
            printf("B is lowest number\n");
        }
        else if (c < a && c < b)
        {
            printf("C is lowest number\n");
        }
        break;
    }
    default:
        printf("the case is not found\n");
        break;
    }

    return 0;
}
