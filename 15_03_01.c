#include <stdio.h>

void main() {
  char data[5] = {1, 2, 3, 4, 5};
  int result = 0, i;
  char *p = data;

  for (i = 0; i < 5; i++) {
    // 1st
    // result = result + *p;
    // p++;

    // 2nd
    // result = result + *p++;

    // 3rd
    result += *p++;
  }

  printf("data 배열의 각 요소의 함은 %d입니다.\n", result);
}
