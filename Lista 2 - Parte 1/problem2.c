#include <stdio.h>

int main() {

    int n, i, k, c;
    n = i = k = c = 0;

    while(1) {
        scanf("%d", &n);

        if(n >= 1 && n <= 1000) {
            break;
        }
    }

    int v[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    while ((i = getchar()) != '\n' && i != EOF);

    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        if(k <= v[i]) {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}
