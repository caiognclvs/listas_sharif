#include <stdio.h>

int main() {

    int n, i, j, c, d, e, t;
    char temp, v[10000];
    n = i = j = c = d = e = t = 0;

    scanf("%d", &n);

    if(n < 1 || n > 10000) {
        return 0;
    }

    for(j = 0; j < 10000; j++) {
        v[j] = '\0';
    }

    while((d = getchar()) != '\n');

    for(i = 0; i < n; i++) {
        fgets(v, 10000, stdin);

        for(j = 0; j < 10000; j++) {
            if(v[j] >= 32) {
                c++;
            }

            if(v[j] == '\n') {
                v[j] = '\0';
            }

            if(v[j] == 32) {
                e++;
            }

            if(v[j] != '\n' && v[j] != '\0') {
                t++;
            }
        }

        if(e == c || t > 1000) {
            c = 0;
        }

        if(c >= 1 && c <= 1000) {
            for(j = 0; j < 1000; j++) {
                if((v[j] >= 65 && v[j] <= 122) && v[j] != '\0') {
                    v[j] = v[j] + 3;
                }
            }
    
            for(j = c - 1; j >= c / 2; j--) {
                temp = v[j];
                v[j] = v[c - j - 1];
                v[c - j - 1] = temp;
            }
    
            for(j = (c) / 2; j < c + 1; j++) {
                if(v[j] > 32) {
                    v[j] = v[j] - 1;
                }
            }
    
            printf("%s\n", v);
        }

        for(j = 0; j < 10000; j++) {
            v[j] = '\0';
        }

        c = 0;
        e = 0;
        t = 0;
    }

    return 0;
}
