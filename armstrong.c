/* Armstrong number
153=1^3+5^3+3^3=3+125+27=153
(5*5*5=125)
407=4^3+0^3+7^3=64+0+343=407
(7*7*7=343)
*/
#include<stdio.h>
int main(){
int x,y,r,s=0;
printf("enter any number ");
scanf("%d",&x);

for(y=x;y>0;)
{
    r=y%10;
    s=s+r*r*r;
    y=y/10;

}
if(s==x)
{
    printf("it is armstrong number");
}
else
{
    printf("it is not armstrong number");
}
    return 0;
}