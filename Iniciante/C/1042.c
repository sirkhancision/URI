#include <stdio.h>

int main() {
  int valor[3], valor_cresc[3], temp[3], i;
  for (i=0; i < 3; i++){
    scanf("%d", &valor[i]);
    valor_cresc[i] = valor[i];
  }

  for (i=0; i < 3; i++){
    if (valor_cresc[0] > valor_cresc[1]) {
      temp[0] = valor_cresc[1];
      valor_cresc[1] = valor_cresc[0];
      valor_cresc[0] = temp[0];
    }
    if (valor_cresc[1] > valor_cresc[2]) {
      temp[0] = valor_cresc[1];
      valor_cresc[1] = valor_cresc[2];
      valor_cresc[2] = temp[0];
    }
  }

  for (i=0; i < 3; i++) printf("%d\n", valor_cresc[i]);

  putchar('\n');

  for (i=0; i < 3; i++){
    printf("%d\n", valor[i]);
  }

  return 0;
}
