#include <stdio.h>
#include <math.h>

int main() {

    int n, i, c, temp;
    double n_unidade, n_dezena, n_centena, n_milhar, n_dezena_milhar, inv;
    n = i = c = temp = n_unidade = n_dezena = n_centena = n_milhar = n_dezena_milhar = inv = 0;

    scanf("%d", &n);

    if(n > 99999) {
        printf("NUMERO INVALIDO\n");
    }

    else if(n < 100) {
        temp = n;
        n_unidade = temp / 10.0;
        temp /= 10.0;
        n_unidade = n_unidade - temp;
        n_unidade *= 10.0;

        n_dezena = temp;

        n_unidade = round(n_unidade);
        n_dezena = round(n_dezena);

        inv = n_unidade * 10.0;
        inv += n_dezena;

        if(n == inv) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }

    }

    else if(n >= 100 && n < 1000) {
        temp = n;
        n_unidade = temp / 10.0;
        temp /= 10.0;
        n_unidade = n_unidade - temp;
        n_unidade *= 10.0;

        n_dezena = temp / 100.0;
        temp /= 10;
        n_dezena = n_dezena - n_unidade / 10.0;
        n_dezena *= 100.0;

        n_centena = temp;

        n_unidade = round(n_unidade);
        n_dezena = round(n_dezena);
        n_centena = round(n_centena);
        
        inv = n_unidade * 100.0;
        inv += n_dezena * 10.0;
        inv += n_centena;

        if(n == inv) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    }

    else if(n >= 1000 && n < 10000) {
        temp = n;
        n_unidade = temp / 10.0;
        temp /= 10.0;
        n_unidade = n_unidade - temp;
        n_unidade *= 10.0;

        n_dezena = temp / 100.0;
        temp /= 10;
        n_dezena = n_dezena - (double) temp / 10.0;
        n_dezena *= 100.0;

        n_centena = temp / 10.0;
        temp /= 10.0;
        n_centena = n_centena - temp;
        n_centena *= 10.0;

        n_milhar = temp;

        n_unidade = round(n_unidade);
        n_dezena = round(n_dezena);
        n_centena = round(n_centena);
        n_milhar = round(n_milhar);

        inv = n_unidade * 1000.0;
        inv += n_dezena * 100.0;
        inv += n_centena * 10.0;
        inv += n_milhar;

        if(n == inv) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }

    }

    else if(n >= 10000) {
        temp = n;
        n_unidade = temp / 10.0;
        temp /= 10.0;
        n_unidade = n_unidade - temp;
        n_unidade *= 10.0;

        n_dezena = temp / 10.0;
        temp /= 10;
        n_dezena = n_dezena - temp;
        n_dezena *= 10.0;

        n_centena = temp / 10.0;
        temp /= 10.0;
        n_centena = n_centena - temp;
        n_centena *= 10.0;

        n_milhar = temp / 10.0;
        temp /= 10.0;
        n_milhar = n_milhar - temp;
        n_milhar *= 10.0;

        n_dezena_milhar = temp;

        n_unidade = round(n_unidade);
        n_dezena = round(n_dezena);
        n_centena = round(n_centena);
        n_milhar = round(n_milhar);
        n_dezena_milhar = round(n_dezena_milhar);

        inv = n_unidade * 10000.0;
        inv += n_dezena * 1000.0;
        inv += n_centena * 100.0;
        inv += n_milhar * 10.0;
        inv += n_dezena_milhar;

        if(n == inv) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    }

    return 0;
}
