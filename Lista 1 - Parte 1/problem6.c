#include <stdio.h>

int main() {

    double nota;
    char conceito;
    nota = 0;

    scanf("%lf", &nota);

    if(nota >= 9.0) {
        conceito = 'A';

        printf("NOTA = %.1lf CONCEITO = %c\n", nota, conceito);
    }

    else if(nota < 9.0 && nota >= 7.5) {
        conceito = 'B';
        
        printf("NOTA = %.1lf CONCEITO = %c\n", nota, conceito);
    }

    else if(nota < 7.5 && nota >= 6.0) {
        conceito = 'C';
        
        printf("NOTA = %.1lf CONCEITO = %c\n", nota, conceito);
    }

    else if(nota < 6.0) {
        conceito = 'D';
        
        printf("NOTA = %.1lf CONCEITO = %c\n", nota, conceito);
    }

    return 0;
}
