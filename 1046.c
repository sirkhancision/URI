#define HORA 24

#include <stdio.h>

int main() {
  int hor_ini, hor_fim, duracao;
  scanf("%d %d", &hor_ini, &hor_fim);
  duracao = HORA - (hor_ini - hor_fim);
  if (duracao > 24) duracao -= 24;
  printf("O JOGO DUROU %d HORA(S)\n", duracao);

  return 0;
}
