#include <stdio.h>

int main() {
  int i_num=1, j_num=60, i;

  for (i=0; ;i++) {
    printf("I=%d J=%d\n", i_num, j_num);
    i_num += 3;
    j_num -= 5;
    if (j_num < 0) break;
  }
  
  return 0;
}
