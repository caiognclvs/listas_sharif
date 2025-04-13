#include <stdio.h>

int main() {

    int n, i, c;
    n = i = c = 0;

    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}
