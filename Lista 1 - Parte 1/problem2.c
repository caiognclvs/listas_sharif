#include <stdio.h>

int main() {

    int n1, n2, n3, n5;
    double n4;
    n1 = n2 = n3 = n4 = n5 = 0;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    n4 = n1;
    n4 += (double) n2 / 10;
    n4 *= 10;
    n4 += (double) n3 / 10;
    n4 *= 10;
    n5 = n4;

    if(n1 >= 10 || n2 >= 10 || n3 >= 10) {
        printf("DIGITO INVALIDO\n");
    } else {
        printf("%d, %d\n", n5, n5 * n5);
    }

    return 0;
}
