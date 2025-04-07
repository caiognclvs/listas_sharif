#include <stdio.h>

int main() {
    int n, dia, mes, ano, d1, d2, m1, m2, a1, a2, a3, a4;
    n = dia = mes = ano = d1 = d2 = m1 = m2 = a1 = a2 = a3 = a4 = 0;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Data invalida!\n");
    } else {
        d1 = (n / 10000000) % 10;
        d2 = (n / 1000000) % 10;
        m1 = (n / 100000) % 10;
        m2 = (n / 10000) % 10;
        a1 = (n / 1000) % 10;
        a2 = (n / 100) % 10;
        a3 = (n / 10) % 10;
        a4 = n % 10;
    
        dia = d1 * 10 + d2;
        mes = m1 * 10 + m2;
        ano = a1 * 1000 + a2 * 100 + a3 * 10 + a4;
    
        if (dia == 0 || mes == 0 || ano == 0 || dia > 31 || mes > 12) {
            printf("Data invalida!\n");
        } 
        
        else if ((mes == 2 && dia > 28) || (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11))) {
            printf("Data invalida!\n");
        } 
        
        else {
            printf("%d de ", dia);
            switch (mes) {
                case 1:  
                    printf("janeiro"); 
                    break;
                case 2:  
                    printf("fevereiro"); 
                    break;
                case 3:  
                    printf("marco"); 
                    break;
                case 4:  
                    printf("abril"); 
                    break;
                case 5:  
                    printf("maio"); 
                    break;
                case 6:  
                    printf("junho"); 
                    break;
                case 7:  
                    printf("julho"); 
                    break;
                case 8:  
                    printf("agosto"); 
                    break;
                case 9:  
                    printf("setembro"); 
                    break;
                case 10: 
                    printf("outubro"); 
                    break;
                case 11: 
                    printf("novembro"); 
                    break;
                case 12: 
                    printf("dezembro"); 
                    break;
            }
        
            printf(" de %d\n", ano);
        }
    }

    return 0;
}
