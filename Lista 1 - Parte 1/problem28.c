#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6;
    char a, b, c;
    n1 = n2 = n3 = n4 = n5 = n6 = a = b = c = 0;

    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c%c%c", &a, &b, &c);

    if(n1 > n2 && n1 > n3 && n2 > n3) {
        n6 = n1;
        n5 = n2;
        n4 = n3;
    }

    else if(n1 > n2 && n1 > n3 && n3 > n2) {
        n6 = n1;
        n5 = n3;
        n4 = n2;
    }

    else if(n2 > n1 && n2 > n3 && n3 > n1) {
        n6 = n2;
        n5 = n3;
        n4 = n1;
    }

    else if(n2 > n3 && n1 > n1 && n1 > n3) {
        n6 = n2;
        n5 = n1;
        n4 = n3;
    }

    else if(n3 > n2 && n3 > n1 && n1 > n2) {
        n6 = n3;
        n5 = n1;
        n4 = n2;
    }

    else if(n3 > n2 && n3 > n1 && n2 > n1) {
        n6 = n3;
        n5 = n2;
        n4 = n1;
    }

    if(a == 'A' && b == 'B' && c == 'C') {
        printf("%d %d %d", n4, n5, n6);
    }

    else if(a == 'A' && b == 'C' && c == 'B') {
        printf("%d %d %d", n4, n6, n5);
    }

    else if(a == 'B' && b == 'A' && c == 'C') {
        printf("%d %d %d", n5, n4, n6);
    }

    else if(a == 'B' && b == 'C' && c == 'A') {
        printf("%d %d %d", n5, n6, n4);
    }

    else if(a == 'C' && b == 'A' && c == 'B') {
        printf("%d %d %d", n6, n4, n5);
    }

    else if(a == 'C' && b == 'B' && c == 'A') {
        printf("%d %d %d", n6, n5, n4);
    }

    return 0;
}
