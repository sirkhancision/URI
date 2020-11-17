#include <stdio.h>

typedef struct {
	int x, y;
} CASO;

int main () {
	CASO c;
	int n, i, j, soma=0, tmp;
	scanf("%d", &n);

	for (i=0; i < n; i++) {
		soma = 0;
		scanf("%d %d", &c.x, &c.y);
		if (c.x > c.y) {
			tmp = c.x;
			c.x = c.y;
			c.y = tmp;
		}
		for (j=(c.x)+1; j < c.y; j++)
			if (j % 2 != 0) soma += j;
		printf("%d\n", soma);
	}

	return 0;
}
