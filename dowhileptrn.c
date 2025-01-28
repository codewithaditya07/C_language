// pattern in do while
/*#include<stdio.h>
int main (){
    int x,y;
    x=1;
    do
    {
        y=1;
    do
    {
        printf("*");
        y++;
    } while (y<=x);

        printf("\n");
        x++;
    } while (x<=5);


    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int x, y;
    x = 1;
    do
    {
        y = 1;
        do
        {
            printf(" ");
            y++;
        } while (y <= 6 - x);

        y = 1;
        do
        {
            printf("%d", y);
            y++;
        } while (y <= x);

        y=1;
        do
        {
            if(x!=1)
            printf("%d", x - y);
            y++;
        } while (y < x);


        printf("\n");
        x++;
    } while (x <= 5);


    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int x, y, k = 1;
    x = 1;
    do
    {
        y = 1;
        do
        {

            printf(" ");

            y++;
        } while (y <= 6 - x);

        y = 1;
        do
        {
            if (k == 10)
                k = 1;
               

            printf("%d", k);
            y++;
            k++;

        } while (y <= x);
        y = 1;
        do
        {
            if (k == 10)
                k = 1;
                if(x!=1)

            printf("%d", k);
            y++;
            k++;
            
            
        } while (y < x);

        printf("\n");
        x++;
    } while (x <= 6);

    return 0;
}*/
#include<stdio.h>
int main (){
int x,y;
x=1;
do
{
    y=1;
    do
    {
        printf(" %c",64+y);
        y++;
    } while (y<=x);
    

    printf("\n");
x++;

} while (x<=26);

    return 0;
}