#include <stdio.h>

int main() {

    int n1, n2, n3, n4, temp;
    n1 = n2 = n3 = n4 = temp = 0;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n2 < n1) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    scanf("%d", &n3);

    if(n3 < n2 && n3 > n1) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    else if(n3 < n2 && n3 < n1) {
        temp = n1;
        n1 = n3;
        n3 = n2;
        n2 = temp;
    }

    scanf("%d", &n4);

    if(n4 < n3 && n4 > n2) {
        temp = n3;
        n3 = n4;
        n4 = temp;
    }

    else if(n4 < n2 && n4 > n1) {
        temp = n2;
        n2 = n4;
        n4 = n3;
        n3 = temp;
    }

    else if(n4 < n1) {
        temp = n1;
        n1 = n4;
        n4 = n3;
        n3 = n2;
        n2 = temp;
    }

    printf("%d\n", n1 + n2 + n3);

    return 0;
}
