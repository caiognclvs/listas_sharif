#include <stdio.h>
#include <math.h>

int main() {

    int n, n1, n2, i, temp;
    double n1_unidade, n1_dezena, n1_centena, n2_unidade, n2_dezena, n2_centena, tempf;

    scanf("%d", &n);
    int inv[n];

    for(i = 0; i < n; i++) {
        scanf("%d %d", &n1, &n2);

        temp = n1;
        n1_unidade = temp / 10.0;
        temp /= 10.0;
        n1_unidade = n1_unidade - temp;
        n1_unidade *= 10.0;

        temp = n1;
        n1_dezena = temp / 100.0;
        temp /= 100;
        n1_dezena = n1_dezena - temp - n1_unidade / 100.0;
        n1_dezena *= 10.0;

        n1_centena = temp;

        temp = n2;
        n2_unidade = temp / 10.0;
        temp /= 10.0;
        n2_unidade = n2_unidade - temp;
        n2_unidade *= 10.0;

        temp = n2;
        n2_dezena = temp / 100.0;
        temp /= 100;
        n2_dezena = n2_dezena - temp - n2_unidade / 100.0;
        n2_dezena *= 10.0;

        n2_centena = temp;

        n1_unidade = round(n1_unidade);
        n1_dezena = round(n1_dezena);
        n1_centena = round(n1_centena);
        n2_unidade = round(n2_unidade);
        n2_dezena = round(n2_dezena);
        n2_centena = round(n2_centena);

        if(n1_unidade > n2_unidade) {
            tempf = n1_unidade + n1_dezena / 10.0;
            tempf *= 10.0;
            tempf += n1_centena / 10.0;
            tempf *= 10.0;
            inv[i] = tempf;
        }

        else if(n1_unidade < n2_unidade) {
            tempf = n2_unidade + n2_dezena / 10.0;
            tempf *= 10.0;
            tempf += n2_centena / 10.0;
            tempf *= 10.0;
            inv[i] = tempf;
        }

        else if(n1_dezena > n2_dezena) {
            tempf = n1_unidade + n1_dezena / 10.0;
            tempf *= 10.0;
            tempf += n1_centena / 10.0;
            tempf *= 10.0;
            inv[i] = tempf;
        }

        else if(n1_dezena < n2_dezena) {
            tempf = n2_unidade + n2_dezena / 10.0;
            tempf *= 10.0;
            tempf += n2_centena / 10.0;
            tempf *= 10.0;
            inv[i] = tempf;
        }

        else if(n1_centena > n2_centena) {
            tempf = n1_unidade + n1_dezena / 10.0;
            tempf *= 10.0;
            tempf += n1_centena / 10.0;
            tempf *= 10.0;
            inv[i] = tempf;
        }

        else if(n1_centena < n2_centena) {
            tempf = n2_unidade + n2_dezena / 10.0;
            tempf *= 10.0;
            tempf += n2_centena / 10.0;
            tempf *= 10.0;
            inv[i] = tempf;
        }
    }

    for(i = 0; i < n; i ++) {
        printf("%d\n", inv[i]);
    }

    return 0;
}
