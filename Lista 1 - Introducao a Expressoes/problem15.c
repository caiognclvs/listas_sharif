#include <stdio.h>

int main() {

    int n, c, resto;
    char res[8] = "00000000";
    n = resto = 0;
    c = 8;

    scanf("%d", &n);

    if(n > 255 || n < 0) {
        printf("Numero invalido!\n");

        return 0;
    }

    while(c > 0) {
        resto = n % 2;
        n = n / 2;
        if(resto == 1) {
            res[c-1] = '1';
        } else {
            res[c-1] = '0';
        }
        c--;
    }

    printf("%s\n", res);

    return 0;
}
