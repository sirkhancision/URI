#define DIM 10
#include <stdio.h>
 
int main() {
    int valor[DIM], num, i=0;
    scanf("%d", &num);

    for (i=0; i < DIM; i++) {
        valor[i] = num;
        printf("N[%d] = %d\n", i, valor[i]);
        num += num;
    }

    return 0;
}
