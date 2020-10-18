#include <stdio.h>
#include <stdlib.h>

int main () {
	int n, *x, i, in=0, out=0;
	scanf("%d", &n);
	x = (int *) malloc (n * sizeof(int));

	for (i=0; i < n; i++) {
		scanf("%d", &x[i]);
		if (x[i] >= 10 && x[i] <= 20) in++;
		else out++;
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
} 
