#include <stdio.h>

int main() {
    int dist_total;
    double comb_gasto;
    double consumo_med;
    scanf("%d %lf", &dist_total, &comb_gasto);
    consumo_med = dist_total / comb_gasto;
    printf("%.3f km/l\n", consumo_med);
    return 0;
}
