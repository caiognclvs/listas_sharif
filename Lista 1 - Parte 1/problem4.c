#include <stdio.h>

int main() {

    int n, i;
    double celsius, fahrenheit;
    n = i = celsius = fahrenheit = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%lf", &fahrenheit);
        
        celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit, celsius);
    }

    return 0;
}
