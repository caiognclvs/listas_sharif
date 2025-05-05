#include <stdio.h>

void print_bytes(const void *end_byte, int n) {

    int i, bit;
    unsigned char byte;
    const unsigned char *bytes = (const unsigned char *) end_byte;
    i = bit = 0;

    for(i = 0; i < n; i++) {
        byte = bytes[i];

        for(bit = 7; bit >= 0; bit--) {
            printf("%d", (byte >> bit) & 1);
        }

        printf(" ");
    }

    printf("\n");
}

int main() {

    double n;
    n = 0;

    scanf("%lf", &n);

    unsigned char n1 = n;
    unsigned short n2 = n;
    unsigned int n3 = n;
    float n4 = n;
    double n5 = n;

    print_bytes(&n1, sizeof(n1));
    print_bytes(&n2, sizeof(n2));
    print_bytes(&n3, sizeof(n3));
    print_bytes(&n4, sizeof(n4));
    print_bytes(&n5, sizeof(n5));

    return 0;
}
