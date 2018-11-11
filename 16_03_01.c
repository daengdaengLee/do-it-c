#include <stdio.h>
#include <malloc.h>

void main() {
  char *p_name;
  p_name = (char *)malloc(32);
  if (NULL != p_name) {
    printf("Your name : ");
    fgets(p_name, 32, stdin);

    printf("Hi~ %s", p_name);
    free(p_name);
  } else {
    printf("Memory allocation error!!");
  }
}
