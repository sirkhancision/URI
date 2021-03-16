#include <stdio.h>

typedef struct {
	int cod, alc, gas, dies;
} COMB;

int main () {
	COMB c;
	int i;
	c.cod = c.alc = c.gas = c.dies = 0;

	for (i=0; c.cod != 4; i++) {
		scanf("%d", &c.cod);
		if (c.cod < 1 || c.cod > 4) continue;
		switch (c.cod) {
			case 1:
			c.alc++;
			break;

			case 2:
			c.gas++;
			break;

			case 3:
			c.dies++;
			break;
		}
	}

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", c.alc, c.gas, c.dies);

	return 0;
}
