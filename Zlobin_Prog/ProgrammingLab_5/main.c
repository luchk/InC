#include <stdio.h>
#include <math.h>

double f(double x){
    return exp(x) - exp(-x) - 2;
}
double fp(double x){
    return exp(x)-exp(-x);
}
int main() {

    double x=1,dx, eps, test;
    eps = 1e-16;
    do {
        dx = f(x)/fp(x);
        x = x-dx;
         //printf("x = %1.20Lf f(x) = %1.20Lf \n", x , f(x));
    }while(fabs(dx)>eps);

    printf("x = %.10Lf f(x) = %.10f \n", x , f(x));
    return 0;
}
