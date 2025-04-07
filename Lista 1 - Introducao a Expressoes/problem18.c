#include <stdio.h>

int main() {

    float a, b, c, d, e, f, x, y;
    a = b = c = d = e = f = x = y = 0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    y = ((a * f) - (d * c)) / ((a * e) - (b * d));
    x = (c / a) - ((b / a) * y);

    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}
