#include <stdio.h>

int main() {

    int populacao1, populacao2, c;
    populacao1 = populacao2 = c = 0;

    scanf("%d", &populacao1);
    scanf("%d", &populacao2);

    while(1) {
        populacao1 += (double) populacao1 * 0.03;
        populacao2 += (double) populacao2 * 0.015;
        c++;

        if(populacao1 >= populacao2) {
            break;
        }
    }

    printf("ANOS = %d", c);

    return 0;
}
