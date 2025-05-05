#include <stdio.h>
#include <math.h>
 
int raizesEq2Grau(double a, double b, double c, double *x1, double *x2) {
 
    double delta;
    delta = 0;
 
    delta = pow(b, 2.0) - 4.0 * a * c;
    
 
    if(delta > 0) {
        *x2 = (b * -1.0 + sqrt(delta)) / (2.0 * a);
        *x1 = (b * -1.0 - sqrt(delta)) / (2.0 * a);
 
        return 2;
    }
 
    else if(delta == 0) {
        *x1 = (b * -1.0 + sqrt(delta)) / (2.0 * a);
        *x2 = *x1;
 
        return 1;
    }
 
    else {
        return 0;
    }
 
}
 
int main() {
 
    int res;
    double a, b, c, x1, x2, temp;
    a = b = c = x1 = x2 = 0;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    res = raizesEq2Grau(a, b, c, &x1, &x2);
 
    if(x1 > x2) {
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
 
    if(res == 2) {
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }
 
    else if(res == 1) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
 
    else if(res == 0) {
        printf("RAIZES IMAGINARIAS\n");
    }
 
    return 0;
}