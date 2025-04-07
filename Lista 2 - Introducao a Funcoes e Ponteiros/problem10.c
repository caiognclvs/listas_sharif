#include <stdio.h>

double compute_pi(int n) {

    int i;
    double pi, num, den;
    i = 0;
    pi = den = 1;
    num = 2;

    for(i = 0; i < n / 2; i++) {
        pi *= num / den;
        den += 2;
        pi *= num / den;
        num += 2;
    }

    return pi * 2;
}

int main() {

    int n;
    double pi;
    n = pi = 0;

    scanf("%d", &n);

    pi = compute_pi(n);

    printf("%.12lf\n", pi);

    return 0;
}
