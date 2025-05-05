#include <stdio.h>

int main() {

    int n, i, j, d, c;
    int o, e, nn, t, w;
    char v[5];
    n = i = j = d = c = 0;
    o = e = nn = t = w = 0;

    for(i = 0; i < 5; i++) {
        v[i] = '\0';
    }

    scanf("%d", &n);

    if(n <= 0 || n > 1000) {
        return 0;
    }

    while(d = getchar() != '\n');

    for(i = 1; i <= n; i++) {
        fgets(v, 5, stdin);

        for(j = 0; j < 5; j++) {
            if(v[j] != '\0' && v[j] != '\n') {
                c++;
            }

            if(v[j] == 111) o = 1;
            else if(v[j] == 101) e = 1;
            else if(v[j] == 110) nn = 1;
            else if(v[j] == 116) t = 1;
            else if(v[j] == 119) w = 1;
        }

        if(c != 3) {
            printf("%d\n", 3);
        }

        else if(o) {
            if(nn || e) {
                printf("%d\n", 1);
            }

            else if(t || w) {
                printf("%d\n", 2);
            }
        }

        else if(t && w) {
            printf("%d\n", 2);
        }

        else if(nn && e) {
            printf("%d\n", 1);
        }

        o = e = nn = t = w = c = 0;
    }

    return 0;
}
