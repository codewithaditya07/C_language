/*#include<stdio.h>
int main()
{
int a,b,*c;

a=1087;
b=&a;
c=&b;
printf("%d",*c);

return 0;
}*/

//Pointer by function

/*#include<stdio.h>
int anshul(int *, int *);
int main()
{
int x,y;
x=10;
y=20;
printf("\nx=%d and y=%d\n",x,y);
anshul(&x,&y);
printf("\nx=%d and y= %d",x,y);
return 0;
}


int anshul(int *a, int *b)
{
int t=*a;
*a=*b;
*b=t;
}*/
#include<stdio.h>
struct my_struct
{
int age;
int cls;
int ph;
};
int main()
{
struct my_struct ob[5];
int x;

for(x=0;x<5;x++)
{
printf("***%d***\n",x+1);

printf("Enter Age of Student:- ");
scanf("%d",&ob[x].age);
printf("Enter Class of Student:- ");
scanf("%d",&ob[x].cls);
printf("Enter Phone of Student:- ");
scanf("%d",&ob[x].ph);

}


/*
ob.a=98;
ob.b=76;
ob.c=ob.a+ob.b;
printf("\n%d",ob.c);

ob1.a=89;
ob1.b=65;
ob1.c=ob1.a*ob1.b;
printf("\n%d",ob1.c);
*/



return 0;
}