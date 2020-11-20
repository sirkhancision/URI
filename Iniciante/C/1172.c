#define TAM 10

#include <stdio.h>

int main () {
    int x[TAM], i;

    for (i=0; i < TAM; i++) {
        scanf("%d", &x[i]);

        if (x[i] <= 0)
            x[i] = 1;
    }

    for (i=0; i < TAM; i++)
        printf("X[%d] = %d\n", i, x[i]);
    
    return 0;
}
