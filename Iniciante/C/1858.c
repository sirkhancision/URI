#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *algoz, temp = 0, res = 1;

    (scanf("%d", &n));

    algoz = (int*) malloc(n * sizeof(int));

    for(i = 1; i <= n; i++) {
        scanf("%d", &algoz[i-1]); 
        if (algoz[i-1] == 0) {
            res = i;
            break;
        }
        else if (i == 1)
            temp = algoz[i-1];
        else if (algoz[i-1] < temp) {
            res = i; temp = algoz[i-1];
        }
    }
    printf("%d\n", res);

    return 0;
}