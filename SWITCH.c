//switch case
#include <stdio.h>
int main()
{
    int x;
    x=5;

    switch (x)
    {
    case 1: /* constant-expression */
    {
        int a, b, c;
        a = 111;
        b = 100;
        c = a + b;
        printf("the sum of a,b = %d\n",c);
        break;
    }
    case 2:
    {
        int a, b, c;
        a = 100;
        b = 200;
        c = a - b;
        printf("the subtraction of a,b = %d\n",c);
        break;
    }
    case 3:
    {
        int a, b, c;
        a = 60;
        b = 50;
        c = a * b;
        printf("the multiply of a,b = %d\n",c);
        break;
    }
    case 4:
    {
        int a,b,c;
        a = 100;
        b = 40;
        c = a/b;
        printf("the div of a,b = %d\n",c);
        break;
    }
    default:
    {
        printf("expected case is not found");
        break;
    }
    }

    return 0;
}