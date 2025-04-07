#include <stdio.h>

int fibonacci(int t1, int t2, int n) {

    int c, fib;
    c = fib = 0;

    for(c = 0; c < n - 2; c++) {
        fib = t1 + t2;
        t1 = t2;
        t2 = fib;
    }

    return fib;
}

int main() {

    int t1, t2, n;
    t1 = t2 = n = 0;

    scanf("%d %d %d", &t1, &t2, &n);

    printf("%d\n", fibonacci(t1, t2, n));

    return 0;
}
