#include <stdio.h>

int main() {

    int n, i, q, primo;
    n = q = 0;
    i = primo = 1;

    scanf("%d", &n);

    if(n < 0) {
        printf("Numero invalido!\n");
    } 
    
    else if(n == 0) {
        printf("NAO PRIMO\n");
    }

    else if(n == 1) {
        printf("NAO PRIMO\n");
    }
    
    else {
        for(i = n - 1; i > 1; i--) {
            q = n % i;
    
            if(q == 0) {
                primo = 0;
                break;
            }
        }

        if(primo) {
            printf("PRIMO\n");
        } else {
            printf("NAO PRIMO\n");
        }
    }

    return 0;
}
