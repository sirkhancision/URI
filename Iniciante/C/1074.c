#include <stdio.h>

int main () {
	int n, i, val;
	scanf("%d", &n);

	for (i=0; i < n; i++) {
		scanf("%d", &val);
		if (val % 2 == 0 && val > 0) printf("EVEN POSITIVE\n");
		if (val % 2 == 0 && val < 0) printf("EVEN NEGATIVE\n");
		if (val % 2 != 0 && val > 0) printf("ODD POSITIVE\n");
		if (val % 2 != 0 && val < 0) printf("ODD NEGATIVE\n");
		if (val == 0) printf("NULL\n");
	}

	return 0;
}
