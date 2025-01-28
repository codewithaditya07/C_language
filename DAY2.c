//adding grade percentage
#include <stdio.h>
int main()
{
    int math, english, economic, computer, science, subjects,per;
    printf("the marks of math\n");
    scanf("%d", &math);

    printf("the marks of english\n");
    scanf("%d", &english);

    printf("the marks of economic\n");
    scanf("%d", &economic);

    printf("the marks of computer\n");
    scanf("%d", &computer);

    printf("the marks of science\n");
    scanf("%d", &science);

    subjects = math + english + economic + computer + science;
    printf("the sum of subjects=%d", subjects);

    per= subjects *100/500;
    printf("\npercentage of student %d\n",per);

    /*if(per>=50)
    {
        printf("Pass");
     
     }
else
{
    printf("Fail");
}*/

if(per>=50 && per<60)
{
printf("\ngrade d");
}
else

if(per>=60 && per<70)
{
printf("\ngrade c");

}
 else

if(per>=70 && per<80)
{
    printf("\ngrade b");
}
else

if(per>=80 && per<90)
{
    printf("\n grade A");
}
else

if(per<=40  && per<50)
{
    printf(" \n grade E");
}

    return 0;
}

