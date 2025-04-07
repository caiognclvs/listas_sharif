#include <stdio.h>

int main() {

    double n1, n2, n3, media;
    n1 = n2 = n3 = media = 0;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("MEDIA = %.2lf\n", media);

    if(media >= 6.0) {
    printf("APROVADO\n");
    } else {
    printf("REPROVADO\n");
    }

    return 0;
}
