#include <stdio.h>

void print_bytes(const void * end_byte, int n) {

    unsigned char n1 = n;
    unsigned short n2 = n;
    unsigned int n3 = n;
    float n4 = n;
    double n5 = n;

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);
}

int main() {

    double n;
    n = 0;

    scanf("%lf", &n);

    print_bytes(&n, n);

    return 0;
}
