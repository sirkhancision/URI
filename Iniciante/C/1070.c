#include <stdio.h>

int main () {
	int x, i, imp=0;
	scanf("%d", &x);

	for (i=0; ; i++) {
		if (imp == 6) break;
		else
		if (x % 2 != 0) {
			printf("%d\n", x);
			imp++;
		}
		x++;
	}

	return 0;
}
