#include <stdio.h>

void main() {
  char temp[64];
  FILE *p_file = fopen("tips.txt", "rt");
  if (NULL != p_file) {
    while (EOF != fscanf(p_file, "%s", temp)) {
      printf("%s\n", temp);
    }
    fclose(p_file);
  }
}
