#include <stdio.h>

int main () {
	double sal, sal_tax, tmp;
	scanf("%lf", &sal);

	if (sal >= 0 && sal <= 2000) printf("Isento\n");
	
	if (sal >= 2000.01 && sal <= 3000) {
		sal -= 2000;
		sal_tax = sal;
		sal_tax *= (8./100.);
		printf("R$ %.2f\n", sal_tax);
	}
	if (sal >= 3000.01 && sal <= 4500) {
		sal -= 2000;
		sal -= 1000;
		sal_tax = 1000;
		sal_tax *= 8./100.;
		tmp = sal;
		tmp *= 18./100.;
		sal_tax += tmp;
		printf("R$ %.2f\n", sal_tax);
	}
	if (sal > 4500) {
		sal -= 2000;
		sal -= 1000;
		sal_tax = 1000;
		sal_tax *= 8./100.;
		sal -= 1500;
		tmp = 1500;
		tmp *= 18./100.;
		sal_tax += tmp;
		tmp = sal;
		tmp *= 28./100.;
		sal_tax += tmp;
		printf("R$ %.2f\n", sal_tax);
	}

	return 0;
}
