#include <stdio.h>
#include <stdlib.h>

char* prefixo(int t, char* v) {
    
    int j;
    char *pre = malloc(t * sizeof(char));
    j = 0;

    for(j = 0; j < t; j++) {
        pre[j] = v[j];
    }

    return pre;
}

int main() {

    int n, d, i, t;
    char v[499];
    n = d = i = t = 0;

    for(i = 0; i < 499; i++) {
        v[i] = '\0';
    }

    scanf("%d", &n);
    while(d = getchar() != '\n');

    for(i = 0; i < n; i++) {
        scanf("%d", &t);
        while(d = getchar() != ' ');
        fgets(v, 499, stdin);

        printf("%s\n", prefixo(t, &v[0]));
        free(prefixo(t, &v[0]));
    }

    return 0;
}