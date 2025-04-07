#include <stdio.h>

int somaDivisores(int n) {

    int i, soma;
    i = 1;
    soma = 0;

    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            if(i == 1) {
                printf("%d ", i);
            } 
            
            else {
                printf("+ %d ", i);
            }
            
            soma += i;
        }
    }

    printf("= %d", soma);

    return soma;
}

int main() {

    int n;
    n = 0;

    scanf("%d", &n);

    printf("%d = ", n);

    if(n == somaDivisores(n)) {
        printf(" (NUMERO PERFEITO)\n");
    } else {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }

    return 0;
}
