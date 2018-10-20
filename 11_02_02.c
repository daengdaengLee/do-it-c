#include <stdio.h>

int result;

void Sum(int data1, int data2) {
  int result;
  result = data1 + data2;
}

void main() {
  Sum(5, 3);
  printf("5 + 3 = %d\n", result);
}
