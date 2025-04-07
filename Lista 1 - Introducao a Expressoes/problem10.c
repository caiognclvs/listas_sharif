#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, t;
    a = b = c = t = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    t = (a + b + c) / 2.0;

    printf("A AREA DO TRIANGULO E = %.2lf\n", sqrt(t * (t - a) * (t - b) * (t - c)));

    return 0;
}
