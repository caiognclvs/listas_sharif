#include <stdio.h>

int main() {

    int n, n100, n50, n10, n1;
    n = n100 = n50 = n10 = n1 = 0;

    scanf("%d", &n);

    n100 = n / 100;
    n = n - n100 * 100;
    n50 = n / 50;
    n = n - n50 * 50;
    n10 = n / 10;
    n = n - n10 * 10;
    n1 = n;

    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", n1);

    return 0;
}
