#include <stdio.h>

int main() {

    int n, soma_par, soma_impar, cpar, cimpar;
    double media_par, media_impar;
    soma_par = soma_impar = cpar = cimpar = media_par = media_impar = 0;
    n = 1;

    while(n != 0) {
        scanf("%d", &n);

        if(n == 0) {
            break;
        }

        else if(n % 2 == 0) {
            soma_par += n;
            cpar++;
        }

        else if(n % 2 != 0) {
            soma_impar += n;
            cimpar++;
        }
    }

    if(cpar == 0) {
        cpar = 1;
    }

    if(cimpar == 0) {
        cimpar = 1;
    }

    media_par = (double) soma_par / (double) cpar;
    media_impar = (double) soma_impar / (double) cimpar;

    printf("MEDIA PAR: %lf\n", media_par);
    printf("MEDIA IMPAR: %lf\n", media_impar);

    return 0;
}
