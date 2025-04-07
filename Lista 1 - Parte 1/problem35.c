#include <stdio.h>

int main() {

    int n, i, j, c, soma1, soma2, etapa;
    n = i = j = c = soma1 = soma2 = 0;
    etapa = 220;

    scanf("%d", &n);

    if(n > 8 || n <= 0) {
        n = 8;
    }

    while(c < n) {
        i = etapa;
        soma1 = soma2 = 0;

        if(i % 2 == 0) {
            j = etapa - 1;

            while(j > 0) {
                if(i % j == 0) {
                    soma1 += j;
                }
    
                j--;
            }
        } else {
            j = etapa - 2;

            while(j > 0) {
                if(i % j == 0) {
                    soma1 += j;
                }
    
                j -= 2;
            }
        }

        if(soma1 > 1) {
            i = soma1;
            
            if(i % 2 == 0) {
                j = soma1 - 1;

                while(j > 0) {
                    if(i % j == 0) {
                        soma2 += j;
                    }
        
                    j--;
                }
            } else {
                j = soma1 - 2;

                while(j > 0) {
                    if(i % j == 0) {
                        soma2 += j;
                    }
        
                    j -= 2;
                }
            }

            if(soma2 == etapa && soma1 != soma2) {
                if(soma2 == 6368) {
                    printf("(%d,%d)\n", soma1, soma2);

                    c++;
                    etapa = soma2;
                } else {
                    printf("(%d,%d)\n", soma2, soma1);

                    c++;
                    etapa = soma1;
                }
            }
        }

        etapa++;
    }

    return 0;
}
