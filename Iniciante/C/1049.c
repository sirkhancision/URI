#include <stdio.h>
#include <string.h>

int main() {
  char pal1[21], pal2[21], pal3[21];
  fgets(pal1, 20, stdin);
  fgets(pal2, 20, stdin);
  fgets(pal3, 20, stdin);

  if (strcmp(pal1, "vertebrado\n") == 0 && strcmp(pal2, "ave\n") == 0 && strcmp(pal3, "carnivoro\n") == 0)
   printf("aguia\n");
  if (strcmp(pal1, "vertebrado\n") == 0 && strcmp(pal2, "ave\n") == 0 && strcmp(pal3, "onivoro\n") == 0)
   printf("pomba\n");
  if (strcmp(pal1, "vertebrado\n") == 0 && strcmp(pal2, "mamifero\n") == 0 && strcmp(pal3, "onivoro\n") == 0)
   printf("homem\n");
  if (strcmp(pal1, "vertebrado\n") == 0 && strcmp(pal2, "mamifero\n") == 0 && strcmp(pal3, "herbivoro\n") == 0)
   printf("vaca\n");
  
  if (strcmp(pal1, "invertebrado\n") == 0 && strcmp(pal2, "inseto\n") == 0 && strcmp(pal3, "hematofago\n") == 0)
   printf("pulga\n");
  if (strcmp(pal1, "invertebrado\n") == 0 && strcmp(pal2, "inseto\n") == 0 && strcmp(pal3, "herbivoro\n") == 0)
   printf("lagarta\n");
  if (strcmp(pal1, "invertebrado\n") == 0 && strcmp(pal2, "anelideo\n") == 0 && strcmp(pal3, "hematofago\n") == 0)
   printf("sanguessuga\n");
  if (strcmp(pal1, "invertebrado\n") == 0 && strcmp(pal2, "anelideo\n") == 0 && strcmp(pal3, "onivoro\n") == 0)
   printf("minhoca\n");
  return 0;
}
