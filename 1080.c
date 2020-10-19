#define TAM 100

#include <stdio.h>

int main () {
	int val[TAM], i, pos=0, maior=0;

	for (i=0; i < TAM; i++) {
		scanf("%d", &val[i]);
		while (getchar() != '\n');
		if ((i != 0) && (val[i] > val[i-1]) && (val[i] > maior)) {				
			maior = val[i];
			pos = i+1;
		}
	}

	printf("%d\n%d\n", maior, pos);

	return 0;
}
