#include <stdio.h>

int main() {
  int idade_dias;
  scanf("%d", &idade_dias);

  if (idade_dias/365 != 0) {
    printf("%d ano(s)\n", idade_dias/365);
    idade_dias -= 365*(idade_dias/365);
  }
  else if (idade_dias/365 == 0) printf("%d ano(s)\n", idade_dias/365);

  if (idade_dias/30 != 0) {
    printf("%d mes(es)\n", idade_dias/30);
    idade_dias -= 30*(idade_dias/30);
  }
  else if (idade_dias/30 == 0) printf("%d mes(es)\n", idade_dias/30);

  if (idade_dias/1 != 0) printf("%d dia(s)\n", idade_dias/1);
  else if (idade_dias/1 == 0) printf("%d dia(s)\n", idade_dias/1);

  return 0;
}
