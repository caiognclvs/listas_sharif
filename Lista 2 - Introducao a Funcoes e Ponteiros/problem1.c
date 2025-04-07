#include <stdio.h>

unsigned long int fat(unsigned int n) {

    int i;
    unsigned long int fat;
    fat = i = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int main() {

    int n;
    unsigned int fac;

    scanf("%d", &n);

    fac = fat(n);

    printf("%d! = %lu\n", n, fac);
    
    return 0;
}
