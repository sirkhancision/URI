#include <stdio.h>

int main() {
	double valor[6], valor_pos[6], media;
	int i, pos=0;

	for (i=0; i < 6; i++) {
		scanf("%lf", &valor[i]);
		if (valor[i] > 0) { 
			pos++;
			valor_pos[i] = valor[i];
		}
	}

	for (i=0; i < 6; i++) media += valor_pos[i];
	media /= pos;

	printf("%d valores positivos\n", pos);
	printf("%.1f\n", media);

	return 0;
}
