#include <stdio.h>

int main() {

    int n, m, soma, i;
    char v[100];
    n = m = soma = i = 0;

    while(1) {
        scanf("%d %d", &n, &m);

        if(n == 0 && m == 0) {
            break;
        }

        soma = sprintf(v, "%d", m + n);

        for(i = 0; i < sizeof(v) / sizeof(char); i++) {
            if(v[i] == '0') {
                v[i] = v[i + 1];
                v[i + 1] = '0';
            }
        }

        printf("%s\n", v);
    }

    return 0;
}
