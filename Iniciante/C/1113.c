#include <stdio.h>

int main () {
	int x, y, i;
	x = y = 0;

	for (i=0; ; i++) {
		scanf("%d %d", &x, &y);
		if (x == y) break;
		else if (x > y) printf("Decrescente\n");
		else printf("Crescente\n");
	}

	return 0;
}
