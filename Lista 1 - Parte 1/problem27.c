#include <stdio.h>

int main() {

    int n, c, soma;
    n = soma = 0;
    c = 1;

    scanf("%d", &n);

    printf("%d = ", n);

    while(1) {
        if(n % c == 0 && c == 1) {
            printf("%d ", c);
            soma += c;
        }

        else if(n % c == 0) {
            printf("+ %d ", c);
            soma += c;
        }

        c++;

        if(c == n) {
            break;
        }
    }

    if(soma == n) {
        printf("= %d (NUMERO PERFEITO)\n", n);
    } else {
        printf("= %d (NUMERO NAO E PERFEITO)\n", soma);
    }

    return 0;
}
