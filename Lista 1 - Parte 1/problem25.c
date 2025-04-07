#include <stdio.h>
#include <math.h>

int main() {

    int n, i, cubo, alvo, c;
    n = i = cubo = 0;
    c = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        cubo = (int) pow(i, 3);
        alvo = 0;

        printf("%d*%d*%d = ", i, i, i);

        while(alvo != cubo) {
            while(1) {
                if(c % 2 != 0) {
                    break;
                } else {
                    c++;
                }
            }

            alvo += c;
            if(alvo == cubo) {
                printf("%d\n", c);    
            } else {
                printf("%d+", c);
            }

            c++;
        }

        c++;
    }

    return 0;
}
