#include <stdio.h>

void main() {
  int score = 92;
  char grade;

  if (score >= 90) {
    grade = 'A';
    printf("점수는 %d이고 등급은 %C입니다. \n", score, grade);
  }

  printf("작업 종료 \n");
}
