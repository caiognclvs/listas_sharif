#include <stdio.h>
#include <math.h>
 
int main() {
    
    float a, b, c, delta, x1, x2, temp;
    a = b = c = delta = x1 = x2 = temp = 0;
 
    scanf("%f %f %f", &a, &b, &c);
 
    delta = pow(b, 2.0) - 4.0 * a * c;
 
    if(delta > 0) {
        x2 = (b * -1.0 + sqrt(delta)) / (2.0 * a);
        x1 = (b * -1.0 - sqrt(delta)) / (2.0 * a);
 
        if(x1 > x2) {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
 
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    } 
    
    else if(delta == 0) {
        x1 = (b * -1.0 + sqrt(delta)) / (2.0 * a);
 
        printf("RAIZ UNICA\n");
        printf("X1 = %.2f\n", x1);
    } 
    
    else if(delta < 0) {
        printf("RAIZES IMAGINARIAS\n");
    }
 
    return 0;
}
