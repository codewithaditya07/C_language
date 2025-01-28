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
