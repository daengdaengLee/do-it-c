#include <stdio.h>

void Swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void main() {
  int start = 96, end = 5;

  printf("before : start = %d, end = %d\n", start, end);
  if (start > end) {
    Swap(start, end);
  }
  printf("after : start = %d, end = %d\n", start, end);
}
