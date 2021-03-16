#include <stdio.h>

short int cond;

void checa_num(int num);

int main() {
    int n, i, x;

    scanf("%d", &n);
    if (n < 1 || n > 20) return 1;

    for (i=0; i < n; i++) {
        scanf("%d", &x);
        checa_num(x);
        if (cond == 1)
            printf("%d eh perfeito\n", x);
        else if (cond == 0)
            printf("%d nao eh perfeito\n", x);
    }

    return 0;
}

void checa_num(int num) {
    int div, soma = 0;

    for (div=1; div < num; div++) {
        if (num % div != 0) continue;
        soma += div;
    }

    if (soma == num) cond = 1;
    else cond = 0; 
}