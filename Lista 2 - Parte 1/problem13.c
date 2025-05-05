#include <stdio.h>

int main() {

    int n, d, i, j, t;
    char v[499];
    n = d = i = j = t = 0;

    for(i = 0; i < 499; i++) {
        v[i] = '\0';
    }

    scanf("%d", &n);
    while(d = getchar() != '\n');

    for(i = 0; i < n; i++) {
        scanf("%d", &t);
        while(d = getchar() != ' ');
        fgets(v, 499, stdin);

        for(j = 0; j < t; j++) {
            printf("%c", v[j]);
        }

        for(j = 0; j < 499; j++) {
            v[i] = '\0';
        }

        if(i != n - 1) printf("\n");
    }

    return 0;
}
