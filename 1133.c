#include <stdio.h>

int main () {
	int x, y, i, tmp;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	for (i=x; i < y; i++) {
		if (i == x) i++;
		if ((i % 5 == 2) || (i % 5 == 3)) printf("%d\n", i);
	}

	return 0;
}
