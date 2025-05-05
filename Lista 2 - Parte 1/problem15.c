#include <stdio.h>
 
int main() {
 
    int n, i, j, a, b, d, c;
    n = i = j = a = b = d = c = 0;
 
    scanf("%d", &n);
 
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        c = 0;

        if(a > 12221 || b > 12221 || a < 1 || b < 1) {
            continue;
        } else {
            for(j = 1; j <= (b - a + 1) * 2; j++) {
                if(j <= b - a + 1) {
                    printf("%d", a + j - 1);
                } else {
                    d = b - c;
                    if(d >= 1 && d <= 9) {
                        printf("%d", d);
                    }
     
                    else if(d >= 10 && d <= 99) {
                        printf("%d", (d % 10));
                        d /= 10;
                        printf("%d", d);
                    }
     
                    else if(d >= 100 && d <= 999) {
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d);
                    }
     
                    else if(d >= 1000 && d <= 9999) {
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d);
                    }
     
                    else if(d >= 10000) {
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d - d / 10 * 10);
                        d /= 10;
                        printf("%d", d);
                    }
     
                    c++;
                }
            }
     
            printf("\n");
        }
    }
 
    return 0;
}