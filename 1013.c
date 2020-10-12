#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, maior_ab, maior_abc;
    scanf("%d %d %d", &a, &b, &c);
    maior_ab = (a + b + fabs(a - b)) / 2;
    maior_abc = (maior_ab + c + fabs(maior_ab - c)) / 2;
    printf("%d eh o maior\n", maior_abc);
    return 0;
}
