#include <stdio.h>

int separaDigitos(int n) {

    int a1, a2, a3, inv;
    a1 = a2 = a3 = inv = 0;

    a1 = (n / 100) % 10;
    a2 = (n / 10) % 10;
    a3 = n % 10;

    inv += a3;
    inv *= 10;
    inv += a2;
    inv *= 10;
    inv += a1;

    return inv;
}

int main() {

    int n;
    n = 0;

    scanf("%d", &n);

    printf("%d\n", separaDigitos(n));

    return 0;
}
