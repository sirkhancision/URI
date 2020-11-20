#include <stdio.h>
#include <stdlib.h>

int men_pos[2];

void checa_menor(int vetor[], int tam);

int main() {
    int n, i, *x;

    scanf("%d", &n);
    x = (int *) malloc(n * sizeof(int));

    for(i=0; i < n; i++)
        scanf("%d", (x+i));
    
    checa_menor(x, n);

    printf("Menor valor: %d\nPosicao: %d\n", men_pos[0], men_pos[1]);

    return 0;
}

void checa_menor(int vetor[], int tam) {
    int i;
    men_pos[0] = vetor[0];

    for(i=0; i < tam; i++) {
        if (vetor[i] < men_pos[0]) {
            men_pos[0] = vetor[i];
            men_pos[1] = i;
        }
    }
}