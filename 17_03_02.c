#include <stdio.h>
#include <malloc.h>

void GetMyData(int **q) {
  *q = (int *)malloc(8);
}

void main() {
  int *p;
  GetMyData(&p);
  *p = 5;
  free(p);
}
