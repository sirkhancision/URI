#include <stdio.h>

void dec (double abc_f[3]);

int main(){
  double abc[3], a, b, c;
  int i;

  for (i=0; i < 3; i++) scanf("%lf", &abc[i]);

  dec(abc);
  a = abc[0];
  b = abc[1];
  c = abc[2];

  if (a >= b+c){
    printf("NAO FORMA TRIANGULO\n");
    return 0;
  }
  if ((a*a) == (b*b)+(c*c)) printf("TRIANGULO RETANGULO\n");
  if ((a*a) > (b*b)+(c*c)) printf("TRIANGULO OBTUSANGULO\n");
  if ((a*a) < (b*b)+(c*c)) printf("TRIANGULO ACUTANGULO\n");
  if (a == b || a == c || b == c){
    if (a == b && a == c && b == c){
      printf("TRIANGULO EQUILATERO\n");
      return 0;
    }
    printf("TRIANGULO ISOSCELES\n");
  } 

  return 0;
}

void dec (double abc_f[3]) {
  int i, j;
  double temp;

  for (i=0; i < 3; i++) {
    for (j=0; j < 3-i-1; j++) {
      if (abc_f[j] < abc_f[j+1]) {
        temp = abc_f[j];
        abc_f[j] = abc_f[j+1];
        abc_f[j+1] = temp;
      }
    }
  }
}
