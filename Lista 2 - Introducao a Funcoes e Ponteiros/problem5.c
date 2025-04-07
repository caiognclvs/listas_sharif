#include <stdio.h>
#include <math.h>

double raizesEq2Grau(int a, int b, int c, double *x1, double *x2) {

    double delta;
    delta = 0;

    delta = pow(b, 2) - 4.0 * a * c;
    

    if(delta > 0) {
        *x1 = (b * -1.0 + sqrt(delta)) / (2.0 * a);
        *x2 = (b * -1.0 - sqrt(delta)) / (2.0 * a);

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

    int a, b, c;
    double x1, x2;
    a = b = c = x1 = x2 = 0;

    scanf("%d %d %d", &a, &b, &c);

    if(raizesEq2Grau(a, b, c, &x1, &x2) == 2) {
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    }

    else if(raizesEq2Grau(a, b, c, &x1, &x2) == 1) {
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    }

    else if(raizesEq2Grau(a, b, c, &x1, &x2) == 0) {
        printf("RAIZES IMAGINARIAS\n");
    }

    return 0;
}
