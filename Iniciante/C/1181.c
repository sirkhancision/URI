#define TAM 12

#include <stdio.h>

int main () {
    float m[TAM][TAM], som_med = 0;
    short unsigned int linha;
    int i, j;
    char c;

    scanf("%hu", &linha);
    while (getchar() != '\n');
    if (linha < 0 || linha > TAM-1)
        return 1;

    c = getchar();

    for (i=0; i < TAM; i++) {
        for (j=0; j < TAM; j++)
            scanf("%f", &m[i][j]);
    }

    for (i=0; i < TAM; i++)
        som_med += m[linha][i];

    switch (c) {
        case 'S':
            printf("%.1f\n", som_med);
        break;

        case 'M':
            printf("%.1f\n", som_med/TAM);
        break;

        default:
            return 1;
    }

    return 0;
} 
