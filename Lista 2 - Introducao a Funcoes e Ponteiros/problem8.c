#include <stdio.h>
#include <math.h>

int next_power(int n, int p) {

    int k, c, anterior, atual;
    anterior = atual = 0;
    k = 2;

    while(1) {
        atual = pow(k, p);

        if(atual > n) {
            printf("%d -> %d^%d = %d", n, k, p, anterior);
            return anterior;
            break;
        } else {
            anterior = atual;
        }

        k++;
    }

}

int main() {

    int n, p, base;
    n = p = base = 0;

    scanf("%d %d", &n, &p);

    next_power(n, p);

    return 0;
}
