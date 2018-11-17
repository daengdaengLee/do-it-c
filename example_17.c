#include <stdio.h>
#include <malloc.h>

void InitStack(short **q, int *pos, int size) {
  int i;

  *q = (short *)malloc(sizeof(short) * size);

  for (i = 0; i < size; i++) {
    *(*q + i) = 0;
  }
  *pos = 0;
}

void PushStack(short *q, int *pos, short value, int size) {
  if (*pos >= size) {
    printf("Stack is full\n");
    return;
  }
  *(q + *pos) = value;
  *pos = *pos + 1;
}

void PopStack(short *q, int *pos, short *value) {
  if (*pos <= 0) {
    printf("Stack is empty\n");
    return;
  }
  *value = *(q + *pos - 1);
  *(q + *pos - 1) = 0;
  *pos = *pos - 1;
}

void main() {
  short *p_stack, value;
  int size, pos, i, temp, command;

  printf("Maximum stack size? : ");
  scanf("%d", &size);
  InitStack(&p_stack, &pos, size);

  printf("Init stack (default value : 0)\n");
  for (i = 0; i < size; i++) {
    printf("%dth item : %d\n", i + 1, *(p_stack + i));
  }
  printf("Current Position : %d\n", pos);

  while (1) {
    printf("\n1: Print, 2: Push, 3: Pop, 4: End\n");
    scanf("%d", &command);

    if (command == 1) {
      printf("\nCurrent Stack Status\n");
      for (i = 0; i < size; i++) {
        printf("%dth item : %d\n", i + 1, *(p_stack + i));
      }
      printf("Current Position : %d\n", pos);
    } else if (command == 2) {
      printf("\nInput value to push : ");
      scanf("%d", &temp);
      PushStack(p_stack, &pos, (short)temp, size);
      printf("Current Position : %d\n", pos);
      temp = 0;
    } else if (command == 3) {
      PopStack(p_stack, &pos, &value);
      printf("\nPoped value : %d\n", value);
      printf("Current Position : %d\n", pos);
      value = 0;
    } else {
      break;
    }
  }

  free(p_stack);
  printf("End\n");
}
