// #include<stdio.h>

// int factorial(int x);
//  int main (){
//     int a = 3;

//     printf("the value of factorial %d is %d " , a , factorial(a));

//      return 0 ;
// }
// int factorial(int x){
//     printf("calling factorial [%d] \n" , x);
//     if(x==0 || x==1){
//         return 1 ;
//     }else{
//         return x*factorial(x-1);
//     }
// }

#include <stdio.h>

int factorial(int n)
{
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: n * factorial of (n - 1)
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {

        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
