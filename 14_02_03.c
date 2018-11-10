#include <stdio.h>

void main() {
  int input_data = getchar();
  rewind(stdin);
  printf("first input : %c\n", input_data);
  input_data = getchar();
  rewind(stdin);
  printf("second input : %c\n", input_data);
}
