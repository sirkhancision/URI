#include <stdio.h>

int main () {
	int inum=1, jnum=7, i;

	for (i=1; ; i++) {
		if (inum == 9 && jnum == 5)
			break;
		if (i % 4 == 0) {
				i = 1;
				inum += 2;
				jnum = 7;
			}
		if ((i % 4 != 0) && i != 1) jnum--;
		printf("I=%d J=%d\n", inum, jnum);
	}

	return 0;
}
