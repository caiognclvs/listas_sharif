#include <stdio.h>

int main() {

    float fabrica, distribuidor, imposto;
    fabrica = distribuidor = imposto = 0;

    scanf("%f", &fabrica);
    scanf("%f", &distribuidor);
    scanf("%f", &imposto);

    printf("O VALOR DO CARRO E = %.2f\n", fabrica + fabrica * distribuidor / 100.0 + fabrica * imposto / 100.0);

    return 0;
}
