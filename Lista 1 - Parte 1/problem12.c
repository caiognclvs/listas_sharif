#include <stdio.h>

int main() {

    int n1, n2, i, j, c, max;
    n1 = n2 = i = j = max = 0;
    c = 0;

    scanf("%d", &n1);

    for(i = 0; i < n1; i++) {
        scanf("%d", &n2);

        if(i == 0) {
            j = n1;
        }

        if(n2 > j) {
            c++;
            if(c > max) {
                 max = c;
            }
        } else {
            c = 1;
        }

        j = n2;
    }

    printf("O comprimento do segmento crescente maximo e: %d", max);

    return 0;
}
