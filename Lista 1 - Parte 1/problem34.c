#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <math.h>
 
int main() {
 
    unsigned long int i, j, d, c;
    long double n, num, den;
    i = j = d = c = n = num = 0;
    den = pow(10, 8);
 
    scanf("%Lf", &n);
 
    num = n * den;
 
    if(n == 0) {
        printf("0/0\n");
    }
 
    else if(num > den) {
        i = num;
        j = den;
        d = j;
 
        for(c = j; c > 1; c--) {
            if(i % d == 0 && j % d == 0) {
                i /= d;
                j /= d;
            }
            d--;
        }
 
        printf("%lu/%lu\n", i, j);
 
    } 
    
    else {
        i = den;
        j = num;
        d = j;
 
        for(c = j; c > 1; c--) {
            if(i % d == 0 && j % d == 0) {
                i /= d;
                j /= d;
            }
            d--;
        }
 
        printf("%lu/%lu\n", j, i);
    }
 
    return 0;
}
