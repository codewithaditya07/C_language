/* while loop
// print 1 to 100 number
#include <stdio.h>
int main()
{
    int x = 1;
    while (x <= 100)
    {
        printf("%d\n", x);
        x = x + 1;
    }
    return 0;
}*/
// REVERSE NUMBER IN WHILE LOOP
#include <stdio.h>
int main()
{

    int x, y, r, s = 0;
    printf("enter any value ");
    scanf("%d", &x);
    y = x;
    while (y > 0)
    {
        r = y % 10;
        s = s * 10 + r;
        y = y / 10;
    }
    printf("%d", s);
    return 0;
}