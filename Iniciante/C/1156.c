#include <stdio.h>

int main () {
    double soma = 0;
    float i, s = 1;

    for (i=1; i <= 39; i+=2, s*=2)
        soma += i/s;
    
    printf("%.2f\n", soma);

    return 0;
} 
