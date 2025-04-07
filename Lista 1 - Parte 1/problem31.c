#include <stdio.h>

int main() {

    int n, f1, f2, i, anterior, atual, agora, fibonacci;
    n = f1 = f2 = i = anterior = atual = agora = 0;
    fibonacci = 1;

    scanf("%d %d %d", &n, &f1, &f2);

    for(i = 0; i < n; i++) {
        scanf("%d", &agora);

        if(i == 0) {
                printf("OK\n");
                anterior = f1;
        }

        else if(i == 1) {
            if(agora == f2) {
                printf("OK\n");
            } else {
                printf("Nao e Fibonacci\n");
                fibonacci = 0;
                break;
            }

            atual = f2;
        }

        else if(i == 2) {
            if(agora == (anterior + atual)) {
                printf("OK\n");

                anterior = f2;
                atual = agora;
            } else {
                printf("Nao e Fibonacci\n");
                fibonacci = 0;
                break;
            }
        }

        else {
            if(agora == (anterior + atual)) {
                printf("OK\n");

                anterior = atual;
                atual = agora;
            } else {
                printf("Nao e Fibonacci\n");
                fibonacci = 0;
                break;
            }
        }
    }

    if(fibonacci) {
        printf("A serie informada e de Fibonacci\n");
    }

    return 0;
}
