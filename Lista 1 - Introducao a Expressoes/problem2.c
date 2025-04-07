#include <stdio.h>

int main() {

    float fahrenheit, polegadas;
    fahrenheit = polegadas = 0;

    scanf("%f", &fahrenheit);
    scanf("%f", &polegadas);

    fahrenheit = (fahrenheit - 32) * 5 / 9;
    polegadas = polegadas * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", fahrenheit);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", polegadas);

    return 0;
}
