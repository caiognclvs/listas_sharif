#include <stdio.h>
#include <math.h>

#define pi 3.14159
#define custo_aluminio 100.0

int main() {
 
    float raio, altura, area_lateral, area_circulo, area_total, custo;
 
    scanf("%f", &raio);
    scanf("%f", &altura);

    area_lateral = 2.0 * pi * raio * altura;
    area_circulo = pi * pow(raio, 2);
    area_total = 2 * area_circulo + area_lateral;

    custo = area_total * custo_aluminio;

    printf("O VALOR DO CUSTO E = %.2f\n", custo);

    return 0;
}
