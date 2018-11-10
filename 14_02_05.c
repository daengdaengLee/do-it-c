#include <stdio.h>

void main() {
  char input_data[10];
  fgets(input_data, 10, stdin);

  if (NULL != input_data) {
    printf("input : %s", input_data);
  } else {
    printf("input -> Chnceled\n");
  }
}
