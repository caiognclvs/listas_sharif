#include <stdio.h>
 
int main() {
 
    int n1, n2, n3, n4, inicio, fim, total, horas, minutos;
    n1 = n2 = n3 = n4 = inicio = fim = total = horas = minutos = 0;
 
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
 
    inicio = n1 * 60 + n2;
 
    if(n1 == n2 && n1 == n3 && n1 == n4) {
        fim = n3 * 60 + n4;
        total = fim - inicio + 1440;
        horas = total / 60;
        total -= horas * 60;
        minutos = total;
 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
 
    else if(n1 <= n3) {        
        fim = n3 * 60 + n4;
        total = fim - inicio;
        horas = total / 60;
        total -= horas * 60;
        minutos = total;
 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
 
    else if(n1 > n3) {
        fim = n3 * 60 + n4;
        total = fim - inicio + 1440;
        horas = total / 60;
        total -= horas * 60;
        minutos = total;
 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
 
    return 0;
}
