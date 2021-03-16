#include <stdio.h>

int main () {
	double n1, n2, valid=0;
	int i;

	for (i=0; ; i++) {
		if (valid == 2) {
			printf("media = %.2f\n", (n1+n2)/2);
			break;
		}
		scanf("%lf", &n1);
		if ((n1 >= 0 && n1 <= 10) && valid == 0) {
			++valid;
			n2 = n1;
			continue;
		}
		if ((n1 >= 0 && n1 <= 10) && valid == 1) {
			++valid;
			continue;
		}
		else {
			printf("nota invalida\n");
			continue;
		}
	}

	return 0;
}
