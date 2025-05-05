#include <stdio.h>

int main() {

    int n, i, j, c, d, compara, igual, unico, menor, maior, maior_frequencia, maiores[100];
    n = i = j = c = d = compara = igual = unico = menor = maior = maior_frequencia = 0;

    for(i = 0; i < 100; i++) {
        maiores[i] = 101;
    }

    scanf("%d", &n);

    if(n < 1 || n > 1000000) {
        return 0;
    }

    int v[n];

    for(i = 0; i < n; i++) {
        v[i] = 0;
    }

    for(i = 0; i < n; i++) {
        scanf("%d", &d);
        if(d >= 0 && d <= 100) {
            v[i] = d;
        } else {
            v[i] = 0;
        }
    }

    for(i = 0; i < n; i++) {
        compara = v[i];

        for(j = 0; j < n; j++) {
            if(compara == v[j]) {
                igual++;
            }
        }

        if(igual == maior_frequencia && maior != v[i]) {
            maiores[c] = v[i];
            c++;
            unico = 0;
            maior = v[i];
            maior_frequencia = igual;
        }

        else if(igual > maior_frequencia && i > 0) {
            maiores[c] = v[i];
            c++;
            unico = 1;
            maior = v[i];
            maior_frequencia = igual;
        }

        igual = 0;
    }

    for(i = 0; i < 100; i++) {
        if(i == 0) {
            menor = maiores[i];
        }

        else if(maiores[i] < menor) {
            menor = maiores[i];
        }
    }

    if(unico) {
        printf("%d\n", maior);
    } else {
        printf("%d\n", menor);
    }
    
    printf("%d\n", maior_frequencia);

    return 0;
}
