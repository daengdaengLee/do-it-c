#include <stdio.h>

void main() {
  int c, input_data = getchar();
  while((c = getchar()) != '\n' && c != EOF) {}
  printf("first input : %c\n", input_data);
  input_data = getchar();
  while((c = getchar()) != '\n' && c != EOF) {}
  printf("second input : %c\n", input_data);
}
