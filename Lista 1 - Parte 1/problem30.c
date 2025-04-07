#include <stdio.h>

int fac(int n) {

    int i, fat;
    fat = i = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int main() {

    int n1, n2, i, j, linha;
    n1 = n2 = i = j = linha = 0;

    scanf("%d %d", &n1, &n2);

    linha = n1;

    for(i = 0; i <= n2 - n1; i++) {
        for(j = 0; j <= linha; j++) {
            if(linha == j) {
                printf("%d", fac(linha) / (fac(j) * (fac(linha - j))));
            } else {
                printf("%d,", fac(linha) / (fac(j) * (fac(linha - j))));
            }
        }

        printf("\n");
        linha++;
    }

    return 0;
}
