#include <stdio.h>
#include <math.h>
 
int next_power(int n, int p) {
 
    int k_atual, k_anterior, anterior, atual;
    anterior = atual = k_atual = k_anterior = 0;
    
    while(1) {
        atual = pow(k_atual, p);
 
        if(n == 0) {
            printf("%d -> 0^%d = %d\n", n, p, atual);
            return atual;
            break;
        }
 
        else if(p == 0) {
            printf("%d -> %d^0 = %d\n", n, n, atual);
            return atual;
            break;
        }
 
        else if(atual > n) {
            if(fabs(atual - n) < fabs(anterior - n)) {
                printf("%d -> %d^%d = %d\n", n, k_atual, p, atual);
                return atual;
                break;
            } else {
                printf("%d -> %d^%d = %d\n", n, k_anterior, p, anterior);
                return anterior;
                break;
            }
        } 
        
        else if(atual == n) {
            printf("%d -> %d^%d = %d\n", n, k_atual, p, atual);
            return atual;
            break;
        }
        
        else {
            anterior = atual;
            k_anterior = k_atual;
        }
 
        k_atual++;
    }
}
 
int main() {
 
    int n, p;
    n = p = 0;
 
    scanf("%d %d", &n, &p);
 
    next_power(n, p);
 
    return 0;
}