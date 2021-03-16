#include <stdio.h>

int main () {
    int i, cond = 0;
    double inum, jnum;
    inum = jnum = 0;
    for (i=0; ; i++) {
        if (inum > 2) break;
        else if (cond == 0) {
            printf("I=%g J=%g\n", inum, jnum+1);
            ++cond;
        }
        else if (cond == 1) {
            printf("I=%g J=%g\n", inum, jnum+2);
            ++cond;
        }
        else if (cond == 2) {
            printf("I=%g J=%g\n", inum, jnum+3);
            ++cond;
        }
        else if (cond == 3) {
            inum += 0.2;
            jnum += 0.2;
            cond = 0;
        }
    }

    return 0;
}
