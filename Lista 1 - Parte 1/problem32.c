#include <stdio.h>

int main() {

    int n, i, c, anterior, atual, agora, intercalada, maior, menor;
    
    while(1) {
        n = i = anterior = atual = agora = maior = menor = 0;
        n = 0;
        intercalada = 1;

        scanf("%d", &n);

        if(n == 0) {
            printf("\n");
            break;
        } else {
            for(i = 0; i < n; i++) {
                scanf("%d", &agora);
    
                if(i == 0) {
                    anterior = agora;
                }
        
                else if(i == 1) {
                    atual = agora;
        
                    if(atual < anterior) {
                        maior = 1;
                    } else {
                        menor = 1;
                    }
                }
        
                else {
                    if(maior) {
                        if(agora <= atual) {
                            intercalada = 0;
                            break;
                        } else {
                            maior = 0;
                            menor = 1;
                            atual = agora;
                        }
                    }
        
                    else if(menor) {
                        if(agora >= atual) {
                            intercalada = 0;
                            break;
                        } else {
                            maior = 1;
                            menor = 0;
                            atual = agora;
                        }
                    }
                }
            }
        }

        if(intercalada) {
            printf("Intercalada\n");
        } else {
            printf("Nao intercalada\n");
        }

        while((c = getchar()) != '\n' && c != EOF);
    }

    return 0;
}
