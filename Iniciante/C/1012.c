#define PI 3.14159

#include <stdio.h>
 
int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double tri_ret = (A * C) / 2;
    double circ = PI * (C * C);
    double trap = ((A + B) * C) / 2;
    double quad = B * B;
    double ret = A * B;
    
    printf("TRIANGULO: %.3lf\n"
        "CIRCULO: %.3lf\n"
        "TRAPEZIO: %.3lf\n"
        "QUADRADO: %.3lf\n"
        "RETANGULO: %.3lf\n", tri_ret, circ, trap,
            quad, ret);
    return 0;
}
