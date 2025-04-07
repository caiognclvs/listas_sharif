#include <stdio.h>
#include <math.h>

int main() {

    double n;
    n = 0;

    scanf("%lf", &n);

    printf("%.6lf\n", round(n * 10.0) / 10.0);
    printf("%.6lf\n", round(n * 100.0) / 100.0);
    printf("%.6lf\n", round(n * 1000.0) / 1000.0);

    return 0;
}
