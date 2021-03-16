#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, i, *j;
    scanf("%d", &x);

    j = (int *) malloc(x*sizeof(int));

    for (i=0; i < x; i++) {
        if (i == 0) j[i] = 0;
        else if (i == 1) j[i] = 1;
        else j[i] = j[i-1] + j[i-2];
        if (i == x-1) printf("%d\n", j[i]);
        else printf("%d ", j[i]);
    }
    
    return 0;
} 
