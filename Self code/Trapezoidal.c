//Trapezoidal method
#include<stdio.h>
#include<math.h>

double fun(double x){
    return pow(x,3)+2 * pow(x,2)+7;
}
int main(){
    double a =2.0 ,b = 6.0,h = 1.0;
    int n = ceil ((b-a)/h);

    double x[n+1],y[n+1];

    double p = a;
    for (int i = 0 ; i<=n;i++)
    {
        x[i] = p;
        y[i] = fun(p);
        p = p + h;
    }
    printf("\n x:");
    for (int i  = 0; i<=n;i++){
        printf("%lf",x[i]);
    }
    printf("\n x:");
    for (int i  = 0; i<=n;i++){
        printf("%lf",y[i]);
    }

    double sum = y[0] + y[n];
    for (int i = 1; i<=n;i++){
        sum += 2*y[i];
    }

    sum = sum * (h/2);
    printf("\nfinal result %lf",sum);
}