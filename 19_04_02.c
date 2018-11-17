#include <stdio.h>

void main() {
  int num1, num2, num3;
  FILE *p_file = fopen("tipssoft.txt", "rt");
  if (NULL != p_file) {
    fscanf(p_file, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    fclose(p_file);
  }
}
