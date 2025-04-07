#include <stdio.h>

int main() {

    int a, b;
    double media;
    a = b = media = 0;

    scanf("%d %d", &a, &b);

    media = (a + b) / 2.0;

    printf("%.3lf\n", media);

    return 0;
}
