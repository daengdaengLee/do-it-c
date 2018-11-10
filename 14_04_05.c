#include <stdio.h>

void main() {
  int c = 0;
  int num = 0;

  while (1) {
    printf("input age : ");

    if (scanf("%d", &num) == 0) {
      while((c = getchar()) != '\n' && c != EOF) {}
      printf("[Enter] digit number!! \n");
    } else {

      if (num > 0 && num <= 130) {
        break;
      } else {
        printf("Incorrect Age!! \n");
      }

    }
  }

  printf("your age : %d\n", num);
}
