//rupee to exchange to other currency
#include<stdio.h>
int main (){
int c,ch;
printf(" chose the rupee \n");
scanf("%d",&c);

printf("the chosen currency\n");
scanf("%d",&ch);

if (ch==1)
{
printf("Inr to dollar = %d",c/80);
}
else
if (ch==2)
{
    printf("inr to turkish lira = %d",c/76);
}
else
if (ch==3)
{
    printf("inr to yaun = %d",c/60);
}
else
if (ch==4)
{
    printf("inr to pound = %d",c/77);
}
else
if (ch==5)
{
    printf("inr to won = %d",c/86);
}
else
if (ch==6)
{
    printf("inr to euro = %d",c/81);
}



return 0;
}