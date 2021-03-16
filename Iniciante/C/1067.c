#include <stdio.h>

int main () {
	int x, i, imp=1;

	scanf("%d", &x);

	for (i=0; i <= x; i++) {
		if (imp % 2 != 0)
			printf("%d\n", imp);
		imp++;
	}

	return 0;
}
