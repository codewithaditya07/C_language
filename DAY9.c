// factorial
#include <stdio.h>
int main()
{
    int x, y, f = 1;

    printf("enter any number ");
    scanf("%d", &x);

    for (y = x; y > 0; y--)
    {
        printf("%d *", y);

        f = f * y;
    }
    printf("=%d", f);

    return 0;
}
