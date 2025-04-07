#include <stdio.h>
#include <math.h>

int fac(int n) {

    int i, fat;
    fat = i = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int main() {

    double x, soma;
    int n, i;
    x = soma = n = i = 0;

    scanf("%lf", &x);
    scanf("%d", &n);

    if(n > 9) {
        n = 9;
    }

    for(i = 0; i <= n; i++) {
        soma += (pow(x, i) / fac(i));
    }

    printf("e^%.2lf = %lf\n", x, soma);

    return 0;
}
