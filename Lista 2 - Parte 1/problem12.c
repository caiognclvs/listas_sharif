#include <stdio.h>
#include <math.h>

int main() {

    long int n, i, j, c, temp;
    n = i = j = c = temp = 0;

    scanf("%ld", &n);

    int v[n];

    for(i = 0; i < n; i++) {
        scanf("%ld", &v[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - 1; j++) {
            if(v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    if(n % 2 == 1) {
        printf("%.2lf", (double) v[(int) ceil((double) n / 2) - 1]);
    } else {
        printf("%.2lf", (double) (v[(n / 2) - 1] + v[(n / 2)]) / 2.0);
    }

    return 0;
}
