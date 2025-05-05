#include <stdio.h>

int main() {

    int n, i, j, d, letra, vogal, consoante;
    char frase[10000];
    n = i = j = d = letra = vogal = consoante = 0;

    for(i = 0; i < 10000; i++) {
        frase[i] = '\0';
    }

    scanf("%d", &n);
    while((d = getchar()) != '\n');

    for(j = 0; j < n; j++) {
        fgets(frase, 10000, stdin);

        for(i = 0; i < 10000; i++) {
            if(frase[i] >= 65 && frase[i] <=122) {
                if(frase[i] == 65 || frase[i] == 69 || frase[i] == 73 || frase[i] == 79 || frase[i] == 85 || frase[i] == 97 || frase[i] == 101 || frase[i] == 105 || frase[i] == 111 || frase[i] == 117) {
                    vogal++;
                } else {
                    consoante++;
                }

                letra++;
            }
        }
        
        printf("Letras = %d\n", letra);
        printf("Vogais = %d\n", vogal);
        printf("Consoantes = %d\n", consoante);

        for(i = 0; i < 10000; i++) {
            frase[i] = '\0';
        }

        letra = vogal = consoante = 0;
    }

    return 0;
}
