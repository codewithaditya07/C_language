// find greatest number
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    /* if (a > b && a > c && a > d && a > e && a > f)
     {
         printf("the greatest number= a\n");
     }
     else

         if (b > a && b > c && b > d && b> e && b > f)
 {
         printf("the greatest number= b\n");
 }
     else

         if (c > b &&  c > d && c > e && c > f)
     {
         printf("the greatest number= c\n");
     }
      else
        if (d > a && d > b && d > c && d > e && d > f )
 {
     printf("the greatest number= d\n");
 }
      else
       if (e > a && e > b && e > c && e > d && e > f )
 {
     printf("the greatest number= e\n");

 }
 else
 if (f > a && f > b && f > c && f > d && f > e)
 {
     printf("the greatest number= f\n");
 }*/
    // find lowest number
    if (a < b && a < c && a < d && a < e && a < f)
    {
        printf("the lowest number is A\n");
    }
    else

        if (b < a && b < c && b < d && b < e && d < f)
    {
        printf("the lowest number is B\n");
    }
    else

        if (c < a && c < b && c < d && c < e && c < f)
    {
        printf(" the lowest number is C\n");
    }
    else

        if (d < a && d < b && d < c && d < e && d < f)
    {
        printf("the lowest number is D\n");
    }
    else

        if (e < a && e < b && e < c && e < d && e < f)
    {
        printf("the lowest number is E\n");
    }
    else

        if (f < a && f < b && f < c && f < d && f < e)
    {
        printf("the lowest number is F\n");
    }

    return 0;
}
