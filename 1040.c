#include <stdio.h>

double media(float nota1, float nota2, float nota3, float nota4);

int main() {
  double n1, n2, n3, n4, media_n, n_exam, media_n_exam;
  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
  media_n = media(n1, n2, n3, n4);
  printf("Media: %.1f\n", media_n);
  if (media_n >= 7.0) printf("Aluno aprovado.\n");
  else if (media_n < 5.0) printf("Aluno reprovado.\n");
  else if (media_n >= 5.0 && media_n <= 6.9) {
    printf("Aluno em exame.\n");
    scanf("%lf", &n_exam);
    printf("Nota do exame: %.1f\n", n_exam);
    media_n_exam = (media_n + n_exam) / 2;
    if (media_n >= 5.0) printf("Aluno aprovado.\n");
    else if (media_n < 4.9) printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n", media_n_exam);
  }

  return 0;
}

double media(float nota1, float nota2, float nota3, float nota4){
  float media_final;
  media_final = ( (nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1) ) / (2+3+4+1);
  return media_final;
}
