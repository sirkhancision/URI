#include <stdio.h>

int main () {
    int x, y, z, i;
    z = 1;

    scanf("%d %d", &x, &y);

    for (i=0; z <= y; i++) {
        if (z % x != 0) printf("%d ", z);
        else if (z % x == 0) printf("%d", z);
        if (z % x == 0 && z < y)
            putchar('\n');
        ++z;
    }
    putchar('\n');

    return 0;
} 
