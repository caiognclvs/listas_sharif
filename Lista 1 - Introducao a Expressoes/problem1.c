#include <stdio.h>

int main() {

    double salario, kw, custo;
    salario = kw = custo = 0;
    
    scanf("%lf", &salario);
    scanf("%lf", &kw);

    custo = 0.7*salario/100;

    printf("Custo por kW: R$ %.2lf\n", custo);
    printf("Custo do consumo: R$ %.2lf\n", custo*kw);
    printf("Custo com desconto: R$ %.2lf\n", custo*kw*0.9);

    return 0;
}
