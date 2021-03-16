#include <stdio.h>

int main() {
    float q_rat, q_sap, q_coe, q_total, n;
    short unsigned int i = 0;
    char tipo;
    q_rat = q_sap = q_coe = q_total = n = 0.;

    for(scanf("%hu", &i); i > 0; i--) {
        scanf("%f %c", &n, &tipo);
        while (getchar() != '\n');
        switch (tipo) {
            case 'C':
            q_coe += n;
            break;

            case 'R':
            q_rat += n;
            break;

            case 'S':
            q_sap += n;
            break;
        }
    }

    q_total = q_coe+q_rat+q_sap;
    printf("Total: %.0f cobaias\nTotal de coelhos: %.0f\nTotal de ratos: %.0f\nTotal de sapos: %.0f\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", q_total, q_coe, q_rat, q_sap, (q_coe/q_total)*100., (q_rat/q_total)*100., (q_sap/q_total)*100.);

    return 0;
}