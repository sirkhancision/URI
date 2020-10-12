#include <stdio.h>

int mult(int a, int b);

int main(){
  int a, b, multp;
  scanf("%d %d", &a, &b);
  multp = mult(a, b);
  switch (multp){
    case 0: printf("Nao sao Multiplos\n");
    break;

    case 1: printf("Sao Multiplos\n");
    break;
  }

  return 0;
}

int mult(int a, int b){
  int tru_fal;
  if (a == b) tru_fal = 1;
  else if (a > b && (a % b == 0) ) tru_fal = 1;
  else if (b > a && (b % a == 0) ) tru_fal = 1;
  else tru_fal = 0;

  return tru_fal;
}
