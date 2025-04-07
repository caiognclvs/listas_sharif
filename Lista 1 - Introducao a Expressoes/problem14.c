#include <stdio.h>

int main() {

    int n, a, b1, c1, res1, novo1;
    double b2, c2, res2, novo2;
    n = 0;

    scanf("%d", &n);

    a = n / 100;
    b2 = n / 10.0;
    b1 = b2;
    b2 = b1 / 10.0;
    b1 = b2;
    b2 = (b2 - b1) * 10.0;
    c2 = n / 10.0;
    c1 = c2;
    c2 = (c2 - c1) * 10.0;

    res2 = (a + b2 * 3 + c2 * 5);
    res1 = res2;
    res1 = res1 % 7;
    novo2 = n * 10.0;
    novo1 = novo2 + res1;

    printf("O NOVO NUMERO E = %d\n", novo1);

    return 0;
}
