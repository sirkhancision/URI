#include <stdio.h>

int main () {
	int num=1, i;

	for (i=0; i <= 100; i++) {
		if (num % 2 == 0)
			printf("%d\n", num);
		num++;
	}

	return 0;
}
