#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, *id;
    double media = 0;

    id = (int *) malloc(1*sizeof(int));
    if (!id) return 1;

    for (i=0; ; i++) {
        scanf("%d", &id[i]);
        if (id[i] < 0) break;
        media += id[i];
        id = (int *) realloc(id, (i+2)*sizeof(int));
        if (!id) return 1;
    }
    media /= i;

    printf("%.2f\n", media);

    return 0;
} 
