#include <stdio.h>

typedef struct {
	int x, y;
} CASO;

int main () {
	CASO c;
	int n, i;
	double div;
	scanf("%d", &n);

	for (i=0; i < n; i++) {
		scanf("%d %d", &c.x, &c.y);
		if (c.y == 0) {
			printf("divisao impossivel\n");
			continue;
		}
		div = (double) c.x/c.y;
		printf("%.1f\n", div);
	}

	return 0;
}
