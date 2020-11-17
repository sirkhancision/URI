#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int m, n;
    int *seq;
} VAL;

int main () {
    VAL v;
    int i, sum, tmp;
    i = sum = tmp = 0;

    v.seq = (int *) malloc(1*sizeof(int));

    while(1) {
        sum = 0;
        scanf("%d %d", &v.m, &v.n);
        while (getchar() != '\n');
        if (v.m <= 0 || v.n <= 0) break;
        else if (v.m > v.n) {
            tmp = v.m;
            v.m = v.n;
            v.n = tmp;
        }
        v.seq = (int *) realloc(v.seq, (v.n-v.m+1)*sizeof(int));
        for (i=0; i < (v.n-v.m+1); i++)
            v.seq[i] = v.m+i;
        for (i=0; i <= (v.n-v.m); i++)
            sum += v.seq[i];
        for (i=0; i < (v.n-v.m+1); i++)
            printf("%d ", v.seq[i]);
        printf("Sum=%d\n", sum);
    }

    return 0;
} 
