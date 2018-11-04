#include <stdio.h>

int GetData(void *p_data, char type) {
  int result = 0;
  if (type == 1) result = *(char *)p_data;
  else if (type == 2) result = *(short *)p_data;
  else if (type == 4) result = *(int *)p_data;
  return result;
}

void main() {
  int data = 0x12345678;
  printf("%X\n", GetData(&data, 2));
}
