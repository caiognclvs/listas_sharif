#include <stdio.h>

int procura(char c, char* v) {

    int i;
    i = 0;

    for(i = 0; i < 499; i++) {
        if(v[i] == c) {
            return i;
        }
    }

    return -1;
}


int main() {

    int n, d, i, j;
    char c, v[499];
    n = d = i = j = 0;

    for(j = 0; j < 499; j++) {
        v[j] = '\0';
    }

    scanf("%d", &n);
    while(d = getchar() != '\n');

    for(i = 0; i < n; i++) {
        scanf("%c", &c);
        d = getchar() != ' ';
        fgets(v, 499, stdin);

        if(procura(c, &v[0]) != -1) {
            printf("Caractere %c encontrado no indice %d da string.\n", c, procura(c, &v[0]));
        } else {
            printf("Caractere %c nao encontrado.\n", c);
        }

        for(j = 0; j < 499; j++) {
            v[j] = '\0';
        }
    }

    return 0;
}
