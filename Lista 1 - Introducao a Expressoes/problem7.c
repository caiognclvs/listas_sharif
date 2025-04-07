#include <stdio.h>
#include <math.h>

int main() {

    float altura, aresta;
    altura = aresta = 0;

    scanf("%f %f", &altura, &aresta);

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", 3 * aresta * aresta * sqrt(3) / 2 * altura / 3);

    return 0;
}
