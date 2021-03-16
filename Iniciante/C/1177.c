#define TAM 1000

#include <stdio.h>

int main() {
    int t, i, j, n[TAM];

    scanf("%d", &t);
    if (t < 2 || t > 50) return 1;

    for (i=0, j=0; i < TAM; i++, j++) {
        if (j > t-1) j = 0;

        n[i] = j;

        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}