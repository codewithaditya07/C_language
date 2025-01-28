// PATTERN QUESTIONS
// Q1
/*#include <stdio.h>
int main (){
    int x,y;
    x=1;
    while (x<=5)
    {
        y=1;
        while (y<=5)
        {
            printf("*");
            y++;

        }
        printf("\n");
        x++;
    }

    return 0;
}*/
// Q2
/*#include<stdio.h>
int main(){
int x,y;
x=1;
while (x<=5)
{
    y=1;
    while (y<=x)
    {
        printf("*");
        y++;
    }
    printf("\n");
    x++;

}

return 0;
}*/
// Q3
/*#include<stdio.h>
int main(){
int x,y;
x=1;
while (x<=5)
{
    y=1;
    while (y<=6-x)
    {
        printf("*");
        y++;
    }
    printf("\n");
    x++;

}

return 0;
}*/
// Q4
/*#include<stdio.h>
int main(){
int x,y;
x=1;
while (x<=5)
{


    y=1;
    while (y<=6-x)
    {
        printf(" ");
        y++;
    }

    y=1;
    while (y<=x)
    {
        printf("*");
        y++;
    }
    printf("\n");
    x++;

}
return 0;
}*/
// Q5
/*#include <stdio.h>
int main()
{
    int x, y;
    x = 1;
    while (x <= 5)
    {

        y = 1;
        while (y <= 5)
        {
            if (x == 1 || x == 5 || y == 1 || y == 5)
            {
                printf("*");
            }
            else
                printf(" ");
            y++;
        }

        printf("\n");
        x++;
    }

    return 0;
}*/
// Q6
/*#include<stdio.h>
int main (){
    int x,y;
x=1;
while (x<=10)
{
    y=1;
    while (y<=x)
    {
    printf("%d",y);
        y++;
    }
    printf("\n");
    x++;
}

    return 0;
}*/
// Q7
/*#include <stdio.h>
int main()
{
    int x, y;
    x = 1;
    while (x <= 5)
    {
        y = 1;
        while (y <= x)
        {
            printf(" ");
            y++;
        }

        y = 1;
        while (y <= 6 - x)
        {
            printf("%d", 7 - x - y);
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;
}*/
// Q8
/*#include <stdio.h>
int main (){
    int x,y;
x=1;
while (x<=5)
{
    y=1;
    while (y<=6-x)
    {
    printf(" ");
        y++;
    }
    y=1;
    while (y<=x)
    {
    printf("%d",y);
        y++;
    }

    printf("\n");
    x++;
}

    return 0;
}*/
// Q9
/*#include <stdio.h>
int main (){
    int x,y;
x=1;
while (x<=5)
{
    y=1;
    while (y<=6-x)
    {
    printf(" ");
        y++;
    }
    y=1;
    while (y<=x)
    {
    printf("%d",y);
        y++;
    }
    y=1;
    while (y<x)
    {
    printf("%d",x-y);
        y++;
    }
    printf("\n");
    x++;
}

    return 0;
}*/
// Q10
#include <stdio.h>
int main()
{
    int x, y, k = 1;
    x = 1;
    while (x <= 6)
    {
        y = 1;
        while (y <= 6 - x)
        {
            printf(" ");
            y++;
        }
        y = 1;
        while (y <= x)
        {
            if (k == 10)
                k = 1;
            printf("%d", k);
            y++;
            k++;
        }

        y = 1;
        while (y < x)
        {

            if (k == 10)
                k == 1;
            printf("%d", k);
            y++;
            k++;
        }
        printf("\n");
        x++;
    }

    return 0;
}