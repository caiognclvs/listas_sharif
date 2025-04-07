#include <stdio.h>

double absoluto(double n) {

    if(n >= 0) {
        return n;
    } else {
        n *= -1.0;
        return n;
    }
}

double raiz(double n, double p) {

    double anterior, atual, erro;
    int k;
    anterior = 1;
    atual = k = 0;

    while(1) {
        atual = (anterior + n / anterior) / 2;
        erro = absoluto(n - atual * atual);
        anterior = atual;
        
        printf("r: %.9lf, err: %.9lf\n", atual, erro);
        
        if(erro < p) {
            return atual;
            break;     
        } 
    }
}

int main() {

    double n, e;
    n = e = 0;

    scanf("%lf", &n);
    scanf("%lf", &e);

    raiz(n, e);

    return 0;
}
