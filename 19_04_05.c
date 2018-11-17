#include <stdio.h>

void main() {
  char temp[64];
  FILE *p_file = fopen("tips.txt", "rt");
  if (NULL != p_file) {
    while (NULL != fgets(temp, sizeof(temp), p_file)) {
      printf("%s", temp);
    }
    fclose(p_file);
  }
}
