#define DIM 20

#include <stdio.h>

void troca_vetor (int v[DIM]);

int main () {
  int vetorn[DIM], i;
  for (i=0; i < DIM; i++) scanf("%d", &vetorn[i]);

  troca_vetor(vetorn);

  for (i=0; i < DIM; i++) printf("N[%d] = %d\n", i, vetorn[i]);

  return 0;
}

void troca_vetor (int v[DIM]) {
  int temp[DIM], i, fim;
  fim = (DIM/2);
  
  for (i=0; i < DIM; i++) temp[i] = v[i];

  for (i=0; i <= DIM; i++) {
    v[i] = temp[DIM-(i+1)];
    v[DIM-(i+1)] = temp[i];
    if (i == fim) break;
  }
}
