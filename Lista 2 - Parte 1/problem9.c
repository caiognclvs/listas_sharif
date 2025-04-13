#include <stdio.h>

int main() {

    int n, i, j, c, d;
    char temp, v[1000];
    n = i = j = c = d = 0;

    scanf("%d", &n);

    for(j = 0; j < 1000; j++) {
        v[j] = '\0';
    }

    while ((d = getchar()) != '\n');

    c = 0;

    for(i = 0; i < n; i++) {
        fgets(v, 1000, stdin);     

        for(j = 0; j < 1000; j++) {
            if(v[j] != '\0' && v[j] != '\n') {
                c++;
            }

            if(v[j] == '\n') {
                v[j] = '\0';
            }
        }

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


        if(c % 2 == 0) {
            for(j = (c) / 2 + 1; j < c + 1; j++) {
                v[j] = v[j] - 1;
            }
        } 

        else {
            for(j = c / 2; j < c + 1; j++) {
                v[j] = v[j] - 1;
            }
        }

        printf("%s\n", v);

        for(j = 0; j < 1000; j++) {
            v[j] = '\0';
        }

        c = 0;
    }

    return 0;
}
