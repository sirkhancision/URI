#include <stdio.h>

int main() {
    unsigned int n;
    for((scanf("%u", &n)); n > 0; n--) {
        if (n == 1)
            printf("Ho!\n");
        else
            printf("Ho ");
    }

    return 0;
}