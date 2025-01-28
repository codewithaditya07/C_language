//put any value and print table
#include<stdio.h>
int main (){
int i,j;
printf("put any value ");
scanf("%d",&i);

for (j = 1; j <= 10; j++)
{
    printf("%d\n",i*j);
}
    return 0;
}
//input two number from keyboard  and find value which divide by 3 and 5 
/*#include<stdio.h>
int main (){
int a,b,c;

printf("put first value ");
scanf("%d",&a);

printf("put second value ");
scanf("%d",&b);

for (c = a; c <= b; c++)
{
if (c%3==0 && c%5==0)
{
    printf("%d\n",c*a);
}

}
    return 0;
}*/

