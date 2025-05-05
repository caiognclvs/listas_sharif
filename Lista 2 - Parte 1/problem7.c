#include <stdio.h>

int main() {

    unsigned long int n, m, soma, i;
    char v[10];
    n = m = soma = i = 0;

    for(i = 0; i < 10; i++) {
        v[i] = '\0';
    }

    while(1) {
        scanf("%lu %lu", &m, &n);

        if((n == 0 && m == 0)) {
            break;
        }

        soma = sprintf(v, "%lu", m + n);

        for(i = 0; i < sizeof(v) / sizeof(char); i++) {
            if(v[i] >= 49 && v[i] <= 57) {
                printf("%c", v[i]);
            }
        }

        printf("\n");

        for(i = 0; i < 10; i++) {
            v[i] = '\0';
        }
    }

    return 0;
}
