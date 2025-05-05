#include <stdio.h>

long double compute_pi(unsigned long int n) {

    unsigned long int i;
    long double pi, num, den;
    i = 1;
    pi = den = 1;
    num = 2;

    for(i = 1; i <= n; i++) {
        pi *= num / den;

        if(i % 2 == 0) {
            num += 2;
        } else {
            den += 2;
        }
    }

    pi *= 2;

    return pi;
}

int main() {

    unsigned long int n;
    long double pi;
    n = pi = 0;

    scanf("%lu", &n);

    pi = compute_pi(n);

    printf("%.12Lf\n", pi);

    return 0;
}
