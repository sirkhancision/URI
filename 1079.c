#include <stdio.h>

int main () {
	int n, i, j=0;
	double val[3], med;
	scanf("%d", &n);

	for (i=0; ; j++) {
		if (j == n) break;
		scanf("%lf %lf %lf", &val[i], &val[i+1], &val[i+2]);
		med = ((val[i]*2)+(val[i+1]*3)+(val[i+2]*5))/(2+3+5);
		printf("%.1f\n", med);
	}

	return 0;
}
