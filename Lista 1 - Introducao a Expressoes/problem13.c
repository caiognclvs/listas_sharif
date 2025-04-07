#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, d;
    a = b = c = d = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);

    printf("A DISTANCIA ENTRE A e B = %.2lf\n", sqrt(pow(c - a, 2) + pow(d - b, 2)));

    return 0;
}
