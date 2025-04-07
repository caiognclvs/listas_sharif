#include <stdio.h>
#include <math.h>

int main() {

    unsigned long int nsi;
    int n1, n2, temp, base1, base2, dv1, dv2;
    double n1_unidade, n1_dezena, n1_centena, n1_milhar, n1_dezena_milhar, n1_centena_milhar, n2_unidade, n2_dezena, nsd;
    temp = n1_unidade = n1_dezena = n1_centena = n1_milhar = n1_dezena_milhar = n1_centena_milhar = n1 = n2 = n2_unidade = n2_dezena = nsi = nsd = base1 = base2 = dv1 = dv2 = 0;

    scanf("%d %d", &n1, &n2);

    temp = n1;
    n1_unidade = temp / 10.0;
    temp /= 10.0;
    n1_unidade = n1_unidade - temp;
    n1_unidade *= 10.0;

    n1_dezena = temp / 10.0;
    temp /= 10;
    n1_dezena = n1_dezena - temp;
    n1_dezena *= 10.0;

    n1_centena = temp / 10.0;
    temp /= 10.0;
    n1_centena = n1_centena - temp;
    n1_centena *= 10.0;

    n1_milhar = temp / 10.0;
    temp /= 10.0;
    n1_milhar = n1_milhar - temp;
    n1_milhar *= 10.0;

    n1_dezena_milhar = temp / 10.0;
    temp /= 10.0;
    n1_dezena_milhar = n1_dezena_milhar - temp;
    n1_dezena_milhar *= 10.0;

    n1_centena_milhar = temp / 10.0;
    temp /= 10.0;
    n1_centena_milhar = n1_centena_milhar - temp;
    n1_centena_milhar *= 10.0;

    temp = n2;
    n2_unidade = temp / 10.0;
    temp /= 10.0;
    n2_unidade = n2_unidade - temp;
    n2_unidade *= 10.0;

    if(n2 < 10) {
        n2_dezena = 0;
    } else {
        n2_dezena = temp;
    }

    n1_unidade = round(n1_unidade);
    n1_dezena = round(n1_dezena);
    n1_centena = round(n1_centena);
    n1_milhar = round(n1_milhar);
    n1_dezena_milhar = round(n1_dezena_milhar);
    n1_centena_milhar = round(n1_centena_milhar);
    n2_unidade = round(n2_unidade);
    n2_dezena = round(n2_dezena);
    
    base1 = n1_unidade * 9 + n1_dezena * 8 + n1_centena * 7 + n1_milhar * 6 + n1_dezena_milhar * 5 + n1_centena_milhar * 4;

    if((dv1 = base1 % 11) == 10) {
        dv1 = 0;
    } else {
        dv1 = base1 % 11;
    }
    
    base2 = n2_dezena * 7 + n2_unidade * 8 + dv1 * 9;

    if((dv2 = base2 % 11) == 10) {
        dv2 = 0;
    } else {
        dv2 = base2 % 11;
    }

    nsd = n1;
    nsd *= 10.0;
    nsd += n2_dezena;
    nsd *= 10.0;
    nsd += n2_unidade;
    nsi = nsd;

    if(n2 < 0 || n2 > 28) {
        printf("CODIGO DA UF INVALIDO!\n");
    } else {
        printf("%lu/%d%d\n", nsi, dv1, dv2);
    }
    
    return 0;
}
