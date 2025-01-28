#include<stdio.h>
int main (){
int math,english,science,economic,hindi,total,per;
printf("the marks of math\n");
scanf("%d",&math);

printf("the marks of english\n");
scanf("%d",&english);

printf("the marks of science\n");
scanf("%d",&science);

printf("the marks of economic\n");
scanf("%d",&economic);

printf("the marks of hindi\n");
scanf("%d",&hindi);

total=math+english+science+economic+hindi;
printf("the total marks %d\n",total);

per=total*100/500;
printf("the percentage %d\n",per);
 int x=2;

switch (x)
{
case 1:
{

if (per>=50)
{
    printf("pass");
}
else
{
    printf("faile");
}
    break;
}
case 2:
{
    if (per>=50 && per<60)
    {
        printf("grade C");
    }
    else
    if (per>=60 && per<70)
    {
        printf("grade B");
    }
    else
    if (per>=70 && per<90)
    {
        printf("grade A ");
    }
    break;
    
}
default:
printf("the case not found\n");
    break;
    
}

    return 0;
}
