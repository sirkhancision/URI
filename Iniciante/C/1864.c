#include <stdio.h>

int main() {
    short unsigned int n, i;
    char string[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for ((scanf("%hu", &n)), i = 0; n > 0; n--, i++) {
        if (n < 1 || n > 34)
            return 1;
        putchar(string[i]);
    }
    putchar('\n');

    return 0;
}