#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char nome[30];
	int n;
} MJOLNIR;

int main () {
	MJOLNIR *caso;
	int c, i;
	scanf("%d", &c);

	caso = (MJOLNIR *) malloc(c * sizeof(MJOLNIR));
	if (!caso) return 1;

	for (i=0; i < c; i++) {
		scanf("%s %d", (caso+i)->nome, &(caso+i)->n);
	}

	for (i=0; i < c; i++) {
		if (strcmp((caso+i)->nome, "Thor") == 0) printf("Y\n");
		else printf("N\n");
	}

	return 0;
}
