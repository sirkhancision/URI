#include <stdio.h>

int main() {
    unsigned int n;

    while ((scanf("%u", &n)) == 1) {
        if (n > 0)
            printf("vai ter duas!\n");
        else
            printf("vai ter copa!\n");
        while (getchar() != '\n');
    }

    return 0;
}