#include <stdio.h>
#include <math.h>

int main() {

    int n, i, j, a, b, hip;
    double hipd;
    n = i = j = a = hip = hipd = 0;
    i = j = 2;

    scanf("%d", &n);

    for(a = 1; a <= n; a++) {
        for(i = 2; i <= n; i++) {
            for(j = 2; j <= n; j++) {
                hipd = sqrt(pow(i, 2) + pow(j, 2));
                hip = (int) hipd;

                    if(hipd == a) {
                        if(i <= j) {
                            printf("hipotenusa = %d, catetos %d e %d\n", hip, i, j);
                        }
                    }
                }
            }
        }

    return 0;
}