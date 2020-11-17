#include <stdio.h>

int main () {
    int x, i;

    while (scanf("%d", &x) && x != 0) {
        for (i=1; i <= x; i++) {
            if (i == x)
                printf("%d", i);
            else
                printf("%d ", i);
        }
        
        putchar('\n');
    }

    return 0;
} 
