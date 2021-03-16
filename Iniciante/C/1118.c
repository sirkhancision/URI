#include <stdio.h>

typedef struct {
    double x1, x2;
} NOTAS;

int main () {
    NOTAS n;
    short int c;

    while(1) {
        while (1) {
            scanf("%lf", &n.x1);
            while (getchar() != '\n');
            if (n.x1 < 0 || n.x1 > 10) {
                printf("nota invalida\n");
                continue;
            }
            else break;
        }
        while (1) {
            scanf("%lf", &n.x2);
            while (getchar() != '\n');
            if (n.x2 < 0 || n.x2 > 10) {
                printf("nota invalida\n");
                continue;
            }
            else break;
        }
        printf("media = %.2f\n", (n.x1+n.x2)/2);
        while (1) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%hd", &c);
            if (c == 1) break;
            else if (c == 2) return 0;
            else continue;
        }
    }
    
    return 1;
} 
