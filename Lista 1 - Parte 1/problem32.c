#include <stdio.h>

int main() {

    int n, i, c, anterior, atual, intercalada, maior, menor;
    
    while(1) {
        n = i = anterior = atual = maior = menor = 0;
        intercalada = 1;

        scanf("%d", &n);

        if(n == 0) {
            printf("\n");
            break;
        } else {
            for(i = 0; i < n; i++) {
                scanf("%d", &atual);
    
                if(i == 0) {
                    anterior = atual;
                }
        
                else if(i == 1) {
        
                    if(atual < anterior) {
                        maior = 1;
                    } else {
                        menor = 1;
                    }
                }
        
                else {
                    if(maior) {
                        if(atual <= anterior) {
                            intercalada = 0;
                            break;
                        } else {
                            maior = 0;
                            menor = 1;
                            anterior = atual;
                        }
                    }
        
                    else if(menor) {
                        if(atual >= anterior) {
                            intercalada = 0;
                            break;
                        } else {
                            maior = 1;
                            menor = 0;
                            anterior = atual;
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
