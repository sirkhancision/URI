#include <stdio.h>

int main () {
	int val[5], i, par=0, imp=0, pos=0, neg=0;

	for (i=0; i < 5; i++) {
		scanf("%d", &val[i]);
		if (val[i] % 2 == 0) par++;
		if (val[i] % 2 != 0) imp++;
		if (val[i] > 0) pos++;
		if (val[i] < 0) neg++;
	}

	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", imp);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);

	return 0;
}
