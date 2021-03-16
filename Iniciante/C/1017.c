#include <stdio.h>

int main() {
    int tempo_horas, velocidade;
    double distancia, litros;
    scanf("%d %d", &tempo_horas, &velocidade);
    distancia = tempo_horas * velocidade;
    litros = distancia / 12;
    printf("%.3f\n", litros);
    return 0;
}
