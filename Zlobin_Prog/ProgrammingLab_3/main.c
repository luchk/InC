#include <stdio.h>
#include <math.h>
double f(double x)
{
    return acos(x)- pow((1-0.3*pow(x,3)),1/2);
}

int main() {
  /*  float x, y, a, b, c, d, eps;
    x = 0;
    a = 0;
    b = 1;
    eps = 0.5629;
    while (x<=1){
        c = acosf(x);
        d = pow((1-0.3*pow(x,3)),1/2);
        y = c - d;
        printf("x = %f y = %f \n",x, y);
        x+=0.01;
        y = acosf(x) - pow((1-0.3*pow(x,3)),1/2);
    }
    */
    float x, a, b, c, eps, test;
    x = 0;
    a = 0;
    b = 1;
    eps = 1e-6;



    while (b - a > eps) {
        c = (a + b)/2;
        if(f(b)*f(c)<0) {
            a = c;
        } else {
            b = c;
        }

    }
    printf("%f\n", c );

    test = f(c);
    printf("test our answer %f", test );
    return 0;
}
