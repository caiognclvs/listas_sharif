#include <stdio.h>

int main() {

    double a, b, c, d;
    a = b = c = d;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);

    printf("O VALOR DO DETERMINANTE E = %.2lf\n", a * d - b * c);

    return 0;
}
