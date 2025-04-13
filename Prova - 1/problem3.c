#include <stdio.h>
 
int main() {
 
    unsigned long int m, n, i, j;
    m = n = i = j = 0;
 
    scanf("%lu", &m);
    scanf("%lu", &n);
 
    if(m > 0 && n > 0) {
        for(i = 1; i <= m; i++) {
            for(j = 1; j <= n; j++) {
                if(i > j) {
                    printf("(%lu,%lu)", i, j);
 
                    if(i == j + 1 || j + 1 > n) {
                        printf("\n");
                    } else {
                        printf("-");
                    }
                }            
            }
        }
    }
 
    return 0;
}
