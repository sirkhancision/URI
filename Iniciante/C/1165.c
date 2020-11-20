#include <stdio.h>

short int checa_primo(int num);

int main() {
    int n, x, i;
    short int cond = 0;

    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (i=0; i < n; i++) {
        scanf("%d", &x);
        cond = checa_primo(x);
        if (cond == 2)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }

    return 0;
}

short int checa_primo(int num) {
    int i, vez = 0;

    for (i=1; i <= num; i++)
        if (num % i == 0) ++vez;

    return vez;
}