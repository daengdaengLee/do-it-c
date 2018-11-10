#include <stdio.h>

void main() {
  char input_string[10];
  // gets(input_string);
  fgets(input_string, 10, stdin);
  printf("input : %s\n", input_string);
}
