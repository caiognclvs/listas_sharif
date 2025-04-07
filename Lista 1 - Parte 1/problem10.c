#include <stdio.h>

int main() {

    int n, i, d1, d2, soma, c, j;
    n = i = j = soma = c = 0;
    d1 = d2 = 1;

    scanf("%d", &n);

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            soma = d1 + d2;

            if(soma == n && d1 != d2) {
                printf("D1: %d, D2: %d\n", d1, d2);
                c++;
            }

            d2++;
        }

        d1++;
        d2 = 1;
    }
    
    if(c == 0) {
        printf("Combinacao impossivel\n");
    } else {
        printf("Ha %d possibilidades\n", c);
    }

    return 0;
}
