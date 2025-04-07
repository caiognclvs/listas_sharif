#include <stdio.h>

int main() {

    int carbono, dureza, resistencia;
    carbono = dureza = resistencia = 0;

    scanf("%d", &carbono);
    scanf("%d", &dureza);
    scanf("%d", &resistencia);

    if(carbono < 7 && dureza > 50 && resistencia > 80000) {
        printf("ACO DE GRAU = 10");
    }

    else if(carbono < 7 && dureza > 50) {
        printf("ACO DE GRAU = 9");
    }

    else if(carbono < 7) {
        printf("ACO DE GRAU = 8");
    }

    else {
        printf("ACO DE GRAU = 7");
    }

    return 0;
}
