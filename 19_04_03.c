#include <stdio.h>

void main() {
  int num;
  FILE *p_file = fopen("tipssoft.txt", "rt");
  if (NULL != p_file) {
    while (EOF != fscanf(p_file, "%d", &num)) {
      printf("%d\n", num);
    }
    fclose(p_file);
  }
}
