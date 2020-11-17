#include <stdio.h>

int main () {
	unsigned long int n, i;
	scanf("%lu", &n);
	for (i=1; i <= n; i++) {
		printf("%lu %lu %lu\n", i, (i*i), (i*i*i));
		printf("%lu %lu %lu\n", i, (i*i)+1, (i*i*i)+1);
	}

	return 0;
}
