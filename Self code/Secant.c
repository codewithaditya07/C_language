//SECANT METHOD
#include<stdio.h>
#include<math.h>

double fun(double x){
    return x*x-9*x+21;
}

int main(){
    double x1,x2,x3;
    int counter;

    printf("Enter the initial interval (x1 and x2): \n");
    scanf("%lf %lf" , &x1,&x2);

    printf("Enter the number of iterations: \n");
    scanf("%d" , &counter);

    int iteration = 1 ;
    while(iteration <= counter){
        x3 = (x1*fun(x2)-x2*fun(x1))/(fun(x2) - fun(x1));

        printf("Iteration %d: x1 = %lf , x2 = %lf , x3 = %lf \n" , iteration ,x1,x2,x3);
        x1 = x2;
        x2 = x3;
        iteration++;
    }
    printf("Approximate Value of X3 is %lf",x3);

    return 0;
}