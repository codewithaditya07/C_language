//find prime from 1st way
#include<stdio.h>
int main (){
int x,a,f=0;

printf("enter any digit ");
scanf("%d",&x);

for(a=2;a<=x/2;a++)
{
if (x%a==0)
{
    f=1;
}
if (f==0)
{
    printf("prime");
    break;
}
else
{
    printf("not prime");
    break;
    }

}
    return 0;

}

//find prime number from 2nd way
/*#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        flag = 1;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}*/
