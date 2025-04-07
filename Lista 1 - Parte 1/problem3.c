#include <stdio.h>

int main() {

    int conta;
    float consumo, valor;
    char tipo;
    conta = consumo = valor = 0;

    scanf("%d %f %c", &conta, &consumo, &tipo);

    if(tipo == 'R') {
        valor = 5.0 + 0.05 * consumo;
    } 

    else if(tipo == 'C') {
        if(consumo <= 80) {
            valor = 500.0;
        } else {
            valor = 500.0 + 0.25 * (consumo - 80.0);
        }
    }

    else if(tipo == 'I') {
        if(consumo <= 100) {
            valor = 800.0;
        } else {
            valor = 800.0 + 0.04 * (consumo - 100.0);
        }
    }

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valor);

    return 0;
}
