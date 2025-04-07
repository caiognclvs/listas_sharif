#include <stdio.h>

int proximo_primo(int n) {
     
    int i, c;
    i = c = 0;

    n++;

    while(1) {
        for(i = 1; i < n + 1; i++) {
            if(n % i == 0) {
                c++;
            }
        }

        if(c == 2) {
            break;
        } else {
            n++;
            c = 0;
        }
    }

    return n;
}

int main() {

    int n, i, p, dividiu;
    n = i = dividiu = 0;
    p = 2;

    while(1) {
        scanf("%d", &n);

        if(n <= 0) {
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
        } else {
            break;
        }
    }

    printf("%d = ", n);

    while(1) {
        if(n % p == 0) {
            n /= p;
            dividiu = 1;

            if(n == 1) {
                printf("%d\n", p);
                break;
            } 
            
            else if(dividiu) {
                printf("%d x ", p);
            }
            
            else {
                p = proximo_primo(p);
                dividiu = 0;
            }

        } else {
            p = proximo_primo(p);
            dividiu = 0;
        }
    }

    return 0;
}
