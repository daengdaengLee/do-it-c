#include <stdio.h>
#include <malloc.h>

typedef struct node {
  int number;
  struct node *p_next;
} NODE;

void AddNumber(NODE **pp_head, NODE **pp_tail, int data) {
  if (NULL != *pp_head) {
    (*pp_tail)->p_next = (NODE *)malloc(sizeof(NODE));
    *pp_tail = (*pp_tail)->p_next;
  } else {
    *pp_head = (NODE *)malloc(sizeof(NODE));
    *pp_tail = *pp_head;
  }
  (*pp_tail)->number = data;
  (*pp_tail)->p_next = NULL;
}

void main() {
  NODE *p_head = NULL, *p_tail = NULL, *p;
  int sum = 0, temp;

  while (1) {
    printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
    scanf("%d", &temp);
    if (9999 == temp) break;
    AddNumber(&p_head, &p_tail, temp);
  }

  p = p_head;
  while (NULL != p) {
    if (p != p_head) printf(" + ");
    printf(" %d ", p->number);
    sum = sum + p->number;
    p = p->p_next;
  }
  printf(" = %d\n", sum);

  while (NULL != p_head) {
    p = p_head;
    p_head = p_head->p_next;
    free(p);
  }
  p_tail = p_head;
}
