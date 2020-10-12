#include <stdio.h>
 
int main() {
    int code_peca1, num_peca1, code_peca2, num_peca2;
    double valor_peca1, valor_peca2;
    scanf("%d %d %lf", &code_peca1, &num_peca1, &valor_peca1);
    scanf("%d %d %lf", &code_peca2, &num_peca2, &valor_peca2);
    double valor_total = valor_peca1 * num_peca1
        + valor_peca2 * num_peca2;
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);
    return 0;
}
