#include <stdio.h>

int main() {
    int i, j, n, sum = 1;

    for ((scanf("%d", &i)); i > 0; i--) {
        (scanf("%d", &n));
        for (j = 0; j <= n; j++) {
            if (j % 2 == 0)
                sum -= 1;
            else
                sum += 1;
        }
        printf("%d\n", sum);
        sum = 1;
    }

    return 0;
}