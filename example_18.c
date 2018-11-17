#include <stdio.h>
#include <malloc.h>

typedef struct student {
  char name[15];
  int korean;
  int english;
  int math;
  int total;
  double mean;
  struct student *p_next;
} STUDENT;

void AddStudent(STUDENT **pp_head, STUDENT **pp_tail, int *len) {
  if (NULL != *pp_head) {
    (*pp_tail)->p_next = (STUDENT *)malloc(sizeof(STUDENT));
    *pp_tail = (*pp_tail)->p_next;
  } else {
    *pp_head = (STUDENT *)malloc(sizeof(STUDENT));
    *pp_tail = *pp_head;
  }
  *len = *len + 1;
  printf("%d 번째 학생 이름 : ", *len);
  scanf("%s", (*pp_tail)->name);
  printf("국어 점수 : ");
  scanf("%d", &((*pp_tail)->korean));
  printf("영어 점수 : ");
  scanf("%d", &((*pp_tail)->english));
  printf("수학 점수 : ");
  scanf("%d", &((*pp_tail)->math));
  (*pp_tail)->total = ((*pp_tail)->korean) + ((*pp_tail)->english) + ((*pp_tail)->math);
  (*pp_tail)->mean = (double)((*pp_tail)->total) / 3;
  (*pp_tail)->p_next = NULL;
}

void PrintStudentList(STUDENT *p_head, int len) {
  STUDENT *p;

  if (NULL != p_head) {
    printf("-------------------------------------------------\n");
    printf("   이름   국어   영어   수학   총점   평점   등수\n");
    printf("-------------------------------------------------\n");
    p = p_head;
    while (NULL != p) {
      printf(
        " %s%7d%7d%7d%7d%7.1f\n",
        p->name,
        p->korean,
        p->english,
        p->math,
        p->total,
        p->mean
      );
      p = p->p_next;
    }
  } else {
    printf("등록된 학생이 없습니다. \n");
  }
}

void main() {
  STUDENT *p_head = NULL, *p_tail = NULL, *p = NULL;
  int command = 0, len = 0;

  while (1) {
    printf("[MENU]\n");
    printf("1. 성적 입력\n");
    printf("2. 성적 확인\n");
    printf("3. 종료\n");
    printf("====================");
    printf("선택 (1 ~ 3) : ");
    scanf("%d", &command);

    if (1 == command) {
      AddStudent(&p_head, &p_tail, &len);
    } else if (2 == command) {
      PrintStudentList(p_head, len);
    } else if (3 == command) {
      break;
    } else {
      printf("1 ~ 3 번호만 선택할 수 있습니다!!\n\n");
    }
  }

  while (NULL != p_head) {
    p = p_head;
    p_head = p_head->p_next;
    free(p);
  }
  p_tail = p_head;
}
