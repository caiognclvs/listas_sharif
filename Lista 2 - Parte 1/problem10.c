#include <stdio.h>

int main() {

    int n, c, i, j;
    n = c = i = j = 0;

    while(1) {
        scanf("%d", &n);

        if(n == EOF) {
            break;
        }

        i = n;

        while(1) {
            i /= 2;
            j++;
            if(i == 0) {
                break;
            }
        }

        int v[j];

        for(i = 0; i < j; i++) {
            v[i] = 0;
        }

        for(i = 0; i <= j; i++) {
            if(n % 2 == 0) {
                v[i] = 0;
            } else {
                v[i] = 1;
            }

            n /= 2;
        }

        for(i = j - 1; i >= 0; i--) {
            printf("%d", v[i]);
        }

        printf("\n");
        j = 0;
    }

    return 0;
}
