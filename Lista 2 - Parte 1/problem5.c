#include <stdio.h>

int main() {

    int n, i, j, letra, vogal, consoante;
    char c;
    n = i = j = letra = vogal = consoante;

    scanf("%d", &n);

    char v[n][10000];

    for(i = 0; i < n; i++) {
        while(c != '\n') {
            scanf("%c", &v[i][j]);
            j++;

            if(v[i][j] == 65 || v[i][j] == 69 || v[i][j] == 73 || v[i][j] == 79 || v[i][j] == 85 || v[i][j] == 97 || v[i][j] == 101 || v[i][j] == 105 || v[i][j] == 111 || v[i][j] == 117) {
                vogal++;
                letra++;
            }
    
            else if(v[i][j] >= 65 && v[i][j] <= 122) {
                consoante++;
                letra++;
            }
        }   

        printf("Letras = %d\n", letra);
        printf("Vogais = %d\n", vogal);
        printf("Consoantes = %d\n", consoante);
    }

    return 0;
}
