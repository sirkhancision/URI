#include <stdio.h>

int main () {
	int x, y, i, soma=0, tmp;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	for (i=x; i <= y; i++) {
		if (i % 13 != 0) soma += i;
	}

	printf("%d\n", soma);

	return 0;
}
