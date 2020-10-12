#include <stdio.h>

int main(){
  int valor;
  scanf("%d", &valor);
  printf("%d\n", valor);

  if (valor/100 != 0) {
    printf("%d nota(s) de R$ 100,00\n", valor/100);
    valor -= (valor/100)*100;
  }
  else if (valor/100 <= 0) printf("%d nota(s) de R$ 100,00\n", valor/100);

  if (valor/50 != 0) {
    printf("%d nota(s) de R$ 50,00\n", valor/50);
    valor -= (valor/50)*50;
  }
  else if (valor/50 <= 0) printf("%d nota(s) de R$ 50,00\n", valor/50);

  if (valor/20 != 0) {
    printf("%d nota(s) de R$ 20,00\n", valor/20);
    valor -= (valor/20)*20;
  }
  else if (valor/20 <= 0) printf("%d nota(s) de R$ 20,00\n", valor/20);

  if (valor/10 != 0) {
    printf("%d nota(s) de R$ 10,00\n", valor/10);
    valor -= (valor/10)*10;
  }
  else if (valor/10 <= 0) printf("%d nota(s) de R$ 10,00\n", valor/10);

  if (valor/5 != 0) {
    printf("%d nota(s) de R$ 5,00\n", valor/5);
    valor -= (valor/5)*5;
  }
  else if (valor/5 <= 0) printf("%d nota(s) de R$ 5,00\n", valor/5);

  if (valor/2 != 0) {
    printf("%d nota(s) de R$ 2,00\n", valor/2);
    valor -= (valor/2)*2;
  }
  else if (valor/2 <= 0) printf("%d nota(s) de R$ 2,00\n", valor/2);

  if (valor/1 != 0) {
    printf("%d nota(s) de R$ 1,00\n", valor/1);
    valor -= (valor/1)*1;
  }
  else if (valor/1 <= 0) printf("%d nota(s) de R$ 1,00\n", valor/1);

  if (valor == 0) return 0;

  return 0;
}
