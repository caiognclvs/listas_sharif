#include <stdio.h>

int main() {

    double massa, aceleracao, tempo;
    massa = aceleracao = tempo = 0;

    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    printf("VELOCIDADE = %.2lf\n", aceleracao * tempo * 3.6);
    printf("ESPACO PERCORRIDO = %.2lf\n", aceleracao * tempo * tempo / 2.0);
    printf("TRABALHO REALIZADO = %.2lf\n", massa * 1000.0 * aceleracao * aceleracao * tempo * tempo / 2.0);
    
    return 0;
}
