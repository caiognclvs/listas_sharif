#include <stdio.h>

int main() {

    int n1, n2, n3, d, c, mmc;
    n1 = n2 = n3 = c = 0;
    d = 2;
    mmc = 1;

    scanf("%d %d %d", &n1, &n2, &n3);

    while(1) {
        if(n1 != 1 && n1 % d == 0) {
            c++;
        }
    
        if(n2 != 1 && n2 % d == 0) {
            c++;
        }
    
        if(n3 != 1 && n3 % d == 0) {
            c++;
        }

        if(c == 0) {
            d++;
        } else {
            printf("%d %d %d :%d\n", n1, n2, n3, d);

            if(n1 % d == 0) {
                n1 = n1 / d;
            }

            if(n2 % d == 0) {
                n2 = n2 / d;
            }

            if(n3 % d == 0) {
                n3 = n3 / d;
            }

            mmc *= d;
            c = 0;
            
            if(n1 == 1 && n2 == 1 && n3 == 1) {
                break;
            }
        }
    }
    printf("MMC: %d\n", mmc);

    return 0;
}
