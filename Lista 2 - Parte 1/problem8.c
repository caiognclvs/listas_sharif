#include <stdio.h>

int main() {

    int n, i, j, c, maior;
    n = i = j = c = maior = 0;

    while(1) {
        maior = 0;
        scanf("%d", &n);

        if(n == 0) {
            break;
        }

        int v[n];
    
        for(i = 0; i < n; i++) {
            scanf("%d", &v[i]);
    
            if(v[i] > maior) {
                maior = v[i];
            }
        }
    
        for(i = 0; i <= maior; i++) {
            for(j = 0; j < n; j++) {
                if(v[j] <= i) {
                    c++;
                }
            }
    
            printf("(%d) %d\n", i, c);
            c = 0;
        }
    }

    

    return 0;
}
