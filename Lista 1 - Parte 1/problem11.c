#include <stdio.h>

int main() {

    int n, i, fat;
    n = i = 0;
    fat = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fat *= i;
    }

    printf("%d! = %d\n", n, fat);

    return 0;
}
