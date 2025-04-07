#include <stdio.h>

int main() {

    double a, b, c;
    a = b = c = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("O VALOR DE DELTA E = %.2lf\n", b * b - 4 * a * c);

    return 0;
}
