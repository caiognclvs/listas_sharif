#include <stdio.h>
#include <math.h>

int main() {

    int n, a, b1, c1;
    double b2, c2, novo;
    n = 0;

    scanf("%d", &n);

    a = n / 100;
    b2 = n / 10.0;
    b1 = b2;
    b2 = (b1 % 10);
    c2 = n / 10.0;
    c1 = c2;
    c2 = (c2 - c1) * 10;

    novo = (c2 * 10 + b2) * 10 + a;

    printf("%.0lf\n", novo);

    return 0;
}
