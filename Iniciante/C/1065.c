#include <stdio.h>

int main () {
	int val, i, par=0;

	for (i=0; i < 5; i++) {
		scanf("%d", &val);
		if (val % 2 == 0) par++;
	}

	printf("%d valores pares\n", par);

	return 0;
}
