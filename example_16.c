#include <stdio.h>
#include <malloc.h>
#define LIMIT_A 2
#define LIMIT_B 3
#define LIMIT_C 4

void main() {
  char ***p;
  int i, j, k;

  p = (char ***)malloc(sizeof(char **) * LIMIT_A);

  if (NULL != p) {
    for (i = 0; i < LIMIT_A; i++) {
      *(p + i) = (char **)malloc(sizeof(char *) * LIMIT_B);

      if (NULL != *(p + i)) {
        for (j = 0; j < LIMIT_B; j++) {
          *(*(p + i) + j) = (char *)malloc(sizeof(char) * LIMIT_C);

          if (NULL != *(*(p + i) + j)) {
            for (k = 0; k < LIMIT_C; k++) {
              *(*(*(p + i) + j) + k) = 'S';
            }
          } else {
            printf("Fail to create third lv\n");
          }
        }
      } else {
        printf("Fail to create second lv\n");
      }
    }
  } else {
    printf("Fail to create first lv\n");
  }

  if (NULL != p) {
    for (i = 0; i < LIMIT_A; i++) {
      if (NULL != *(p + i)) {
        for (j = 0; j < LIMIT_B; j++) {
          if (NULL != *(*(p + i) + j)) {
            for (k = 0; k < LIMIT_C; k++) {
              printf("[%d][%d][%d]", i, j, k);
              printf("%c\n", *(*(*(p + i) + j) + k));
            }
          } else {
            printf("Fail to read third lv\n");
          }
        }
      } else {
        printf("Fail to react second lv\n");
      }
    }
  } else {
    printf("Fail to read first lv\n");
  }

  if (NULL != p) {
    for (i = 0; i < LIMIT_A; i++) {
      if (NULL != *(p + i)) {
        for (j = 0; j < LIMIT_B; j++) {
          if (NULL != *(*(p + i) + j)) {
            free(*(*(p + i) + j));
            printf("Free *(*(p + %d) + %d)\n", i, j);
          } else {
            printf("Fail to free third lv\n");
          }
        }
        free(*(p + i));
        printf("Free *(p + %d)\n", i);
      } else {
        printf("Fail to free second lv\n");
      }
    }
    free(p);
    printf("Free p\n");
  } else {
    printf("Fail to free first lv\n");
  }
}
