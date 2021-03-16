#define DIA 86400

#include <stdio.h>

int main() {
    unsigned int dia1, dia2, hr1, hr2, min1, min2, seg1, seg2, resdia, reshr, resmin, resseg, totalseg;

    scanf("Dia %u", &dia1);
    while ((getchar()) != '\n');
    scanf("%2u : %2u : %2u", &hr1, &min1, &seg1);
    while ((getchar()) != '\n');

    scanf("Dia %u", &dia2);
    while ((getchar()) != '\n');
    scanf("%2u : %2u : %2u", &hr2, &min2, &seg2);
    while ((getchar()) != '\n');

    totalseg = DIA-(hr1*3600+min1*60+seg1)+(hr2*3600+min2*60+seg2);
    if ((dia2-dia1-1) > 0)
        totalseg += 86400*(dia2-dia1-1);

    resdia = totalseg/DIA; reshr = (totalseg-(resdia*DIA))/3600; resmin = (totalseg-(resdia*DIA)-(reshr*3600))/60; resseg = totalseg-(resdia*DIA)-(reshr*3600)-(resmin*60);

    printf("%u dia(s)\n%u hora(s)\n%u minuto(s)\n%u segundo(s)\n", resdia, reshr, resmin, resseg);

    return 0;
}
