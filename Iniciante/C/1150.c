#include <stdio.h>

int main () {
    int x, z, i, tmp;

    scanf("%d", &x);
    tmp = x;
    while (1) {
        scanf("%d", &z);
        if (z <= x) continue;
        else break;
    }

    for (i=0; x <= z; i++)
        x += tmp+1;

    printf("%d\n", i);

    return 0;
} 
