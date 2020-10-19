#include <stdio.h>

typedef struct {
	int x, y;
} PONTO;

int main () {
	PONTO p;
	int i;
	p.x = p.y = 1;

	for (i=0; ; i++) {
		scanf("%d %d", &p.x, &p.y);
		if (p.x == 0 || p.y == 0) break;
		if (p.x > 0 && p.y > 0) printf("primeiro\n");
		if (p.x < 0 && p.y > 0) printf("segundo\n");
		if (p.x < 0 && p.y < 0) printf("terceiro\n");
		if (p.x > 0 && p.y < 0) printf("quarto\n");
	}

	return 0;
}
