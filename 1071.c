#include <stdio.h>

int main () {
	int x, y, i, temp, soma=0;
	scanf("%d", &x);
	scanf("%d", &y);

	if (y > x) {
		temp = x;
		x = y;
		y = temp;
	}

	for (i=y; i < x; i++) {
		if (i == y) i++;
		if ((i % 2 != 0))
			soma += i;
	}

	printf("%d\n", soma);

	return 0;
}
