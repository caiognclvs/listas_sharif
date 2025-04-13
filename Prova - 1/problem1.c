#include <stdio.h>
 
int main() {
 
    int n, i, categoria;
    double preco;
    n = i = categoria = preco = 0;
 
    scanf("%d", &n);
 
    for(i = 0; i < n; i++) {
        scanf("%lf %d", &preco, &categoria);
 
        if(categoria == 1) {
            preco = preco * 1.2;
            preco = preco * 1.1;
 
            printf("PRECO FINAL: R$ %.2lf\n", preco);
        } 
        
        else if(categoria == 2) {
            preco = preco * 1.15;
            preco = preco * 1.1;
 
            printf("PRECO FINAL: R$ %.2lf\n", preco);
        }
 
        else if(categoria == 3) {
            preco = preco * 1.3;
            preco = preco * 1.1;
 
            printf("PRECO FINAL: R$ %.2lf\n", preco); 
        }
 
        else {
            printf("CATEGORIA INVALIDA!\n");
        }
    }
 
    return 0;
}
