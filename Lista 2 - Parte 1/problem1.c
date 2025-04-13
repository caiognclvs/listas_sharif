#include <stdio.h>

int main() {

    int n, m, i, j, k, achei;
    n = m = i = j = k = achei = 0;

    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &k);
        achei = 0;
        
        for(j = 0; j < n; j++) {
            if(v[j] == k) {
                printf("ACHEI\n");
                achei = 1;
                break;
            }
        }

        if(achei == 0) {
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}
