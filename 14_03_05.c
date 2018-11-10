#include <stdio.h>
#include <stdlib.h>

void main() {
  int first_num, second_num;
  char first_string[16], second_string[16];

  printf("input first number : ");
  fgets(first_string, 16, stdin);
  printf("input second number : ");
  fgets(second_string, 16, stdin);

  first_num = atoi(first_string);
  second_num = atoi(second_string);

  printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}
