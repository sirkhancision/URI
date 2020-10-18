#include <stdio.h>
#include <string.h>

int main () {
	int val_mes;
	char mes_s[15];
	scanf("%d", &val_mes);
	
	switch (val_mes) {
		case 1:
		strcpy(mes_s, "January");		
		break;

		case 2:
		strcpy(mes_s, "February");		
		break;

		case 3:
		strcpy(mes_s, "March");		
		break;

		case 4:
		strcpy(mes_s, "April");		
		break;

		case 5:
		strcpy(mes_s, "May");		
		break;

		case 6:
		strcpy(mes_s, "June");		
		break;

		case 7:
		strcpy(mes_s, "July");		
		break;

		case 8:
		strcpy(mes_s, "August");	
		break;

		case 9:
		strcpy(mes_s, "September");	
		break;

		case 10:
		strcpy(mes_s, "October");	
		break;

		case 11:
		strcpy(mes_s, "November");		
		break;

		case 12:
		strcpy(mes_s, "December");		
		break;
	}

	printf("%s\n", mes_s);

	return 0;
}
