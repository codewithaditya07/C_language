//Simpson's method 
#include<stdio.h>
#include<math.h>

double fun(double x){
    return pow(x,1.0/3.0);
}

int main (){
    double a = 0.4;
    double b = 1.0;
    double h = 0.2;
    int n = ceil((b-a)/h);

    double x[n],y[n];

    double p = a;
    for (int i = 0;i<=n;i++)
    {
        x[i]= p;
        y[i]= fun(p);
        p = p + h;  
    }

    printf("\n x:");
    for (int i = 0;i<=n;i++)
    {
        printf(" %lf ",x[i]);
    }

    printf("\n y:");
    for (int i = 0;i<=n;i++)
    {
        printf("%lf ",y[i]);
    }

    double sum = y[0] + y[n];

    for (int i = 1; i<n; i++)
    {
        if (i%2==0){
            sum += 4*y[i];
        }
        else {
            sum +=4 * y[i];
        }
    }

   sum = sum * (h / 3);
   printf("\n final result %lf",sum);
   return 0;

   }

