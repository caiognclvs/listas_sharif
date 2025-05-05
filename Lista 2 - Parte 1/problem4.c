#include <stdio.h>

int main() {

    int n, i, j, c, d, total;
    char v[102];
    n = i = j = c = d = total = 0;

    for(i = 0; i < 102; i++) {
        v[i] = '\0';
    }

    scanf("%d", &n);

    if(n < 1 || n > 1000) return 0;

    while(d = getchar() != '\n');

    for(i = 0; i < n; i++) {
        fgets(v, 102, stdin);

        j = 0;

        while(1) {
            if(v[j] == '\n' || v[j] == '\0') break;

            if(v[j] == 48 || v[j] == 54 || v[j] == 57) total += 6;
            else if(v[j] == 49) total += 2;
            else if(v[j] == 50 || v[j] == 51 || v[j] == 53) total += 5;
            else if(v[j] == 52 || v[j] == 55) total += 4;
            else if(v[j] == 56) total += 7;

            j++;
        }

        printf("%d leds\n", total);

        total = 0;
        for(j = 0; j < 102; j++) {
            v[i] = '\0';
        }
    }

    return 0;
}
