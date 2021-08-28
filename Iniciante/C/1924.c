#include <stdio.h>

int main() {
	char* curso = "Ciencia da Computacao"; // curso a ser imprimido
	int n; // número de cursos da lista
	int i;

	// alocar memória à lista
	char lista[scanf("%d", &n)][100];

	for (i = 0; n >= 0; n--, i++)
		fgets(lista[n], sizeof(lista[n]), stdin);
	
	printf("%s\n", curso);
}