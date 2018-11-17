#include <stdio.h>

void main() {
  FILE *p_file = fopen("tipssoft.txt", "wt");
  if (NULL != p_file) {
    fprintf(p_file, "Hello\n");
    fclose(p_file);
  }
}
