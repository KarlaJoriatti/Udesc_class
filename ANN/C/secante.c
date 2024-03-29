#include <stdio.h>
#include <math.h>

int main(void){

    double x0 = 2.0;
    double x1 = 3.0;
    int n = 5;

    secante(x0, x1, n);
    return 0;
}

double f(double x){
    return x*x -2;
}

void secante(double x0, double x1, int n){
    double x2;
    for(int i=0; i<n; i++){
        double fx0 = f(x0);
        double fx1 = f(x1);
        if(fx1 == fx0){
            printf("Divisao por 0 na iteracao \n");
        }
        double x2 = (x0 * fx1 - x1 * fx0)/(fx1 - fx0);
        printf("x_%d = %.16f\n", i+2,x2);
        x0 = x1;
        x1 = x2;
    }
}