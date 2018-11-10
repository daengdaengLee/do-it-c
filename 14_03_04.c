#include <stdio.h>

int ArrayToInteger(char string[ ]) {
  int count = 0, num = 0;
  while (string[count] != 0 && string[count] != '\n') {
    num = num * 10 + (string[count] - '0');
    count++;
  }
  return num;
}

void main() {
  int first_num, second_num;
  char first_string[16], second_string[16];

  printf("input first number : ");
  fgets(first_string, 16, stdin);
  printf("input second number : ");
  fgets(second_string, 16, stdin);

  first_num = ArrayToInteger(first_string);
  second_num = ArrayToInteger(second_string);

  printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}
