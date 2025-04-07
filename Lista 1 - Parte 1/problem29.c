#include <stdio.h>

int main() {

    double n1, n2, n3, n4, temp, array[4];
    int i, j, mudou;
    n1 = n2 = n3 = n4 = i = j = temp = 0;

    scanf("%lf", &n1);
    array[0] = n1;
    scanf("%lf", &n2);
    array[1] = n2;
    scanf("%lf", &n3);
    array[2] = n3;
    scanf("%lf", &n4);
    array[3] = n4;

    for (i = 0; i < 3; i++) {
        mudou = 0;
        for (j = 0; j < 3 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                mudou = 1;
            }
        }
    }

    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", array[0], array[1], array[2], array[3]);

    return 0;
}
