#include <stdio.h>
#include <string.h>

void Q1() {
  int num1, num2, num3;
  double avg;
  printf("Q1\n");

  printf("input first integer : ");
  scanf("%d", &num1);
  printf("input second integer : ");
  scanf("%d", &num2);
  printf("input third integer : ");
  scanf("%d", &num3);

  avg = (num1 + num2 + num3) / 3.0;
  printf("average : %f\n", avg);
}

void Q2() {
  char string1[16], string2[16], i;
  printf("Q2\n");

  printf("input first string : ");
  fgets(string1, 16, stdin);

  printf("input second string : ");
  fgets(string2, 16, stdin);

  i = 0;
  while(string1[i] != '\n') {
    i++;
  }
  string1[i] = 0;

  i = 0;
  while (string2[i] != '\n') {
    i++;
  }
  string2[i] = 0;

  strcat(string1, string2);
  printf("cancat string : %s\n", string1);
}

void Q3() {
  char name[3], blood_type;
  int heart_beat;
  float weight, height;
  
  printf("input your information\n");
  scanf("%s %f %f %c %d", name, &weight, &height, &blood_type, &heart_beat);
  printf("이름: %s, 몸무게: %.1fkg, 키: %.1fcm, 혈액형: %c형, 심박수: %d회\n", name, weight, height, blood_type, heart_beat);
}

void Q4() {
  char name[3][10];
  int korean[3], english[3], math[3], total[3], rank[3], i, avg;

  for (i = 0; i < 3; i++) {
    printf("%d 번째 학생 이름: ", i + 1);
    scanf("%s", name[i]);

    printf("국어 점수: ");
    scanf("%d", &korean[i]);

    printf("영어 점수: ");
    scanf("%d", &english[i]);

    printf("수학 점수: ");
    scanf("%d", &math[i]);
    
    printf("\n");
    total[i] = korean[i] + english[i] + math[i];
  }

  for (i = 0; i < 3; i++) {
    rank[i] = 1;
    int j = 0;
    for (j = 0; j < 3; j++) {
      if (total[i] < total[j]) {
        rank[i] += 1;
      }
    }
  }

  printf("\n");
  printf("-----------------------------------------\n");
  printf("이름     국어  영어  수학  총점  평균  등수\n");
  for (i = 0; i < 3; i++) {
    int j = rank[i] - 1;
    avg = total[j] / 3;
    printf("%s    %d    %d    %d    %d     %d    %d등\n", name[j], korean[j], english[j], korean[j], total[j], avg, i + 1);
  }
  printf("-----------------------------------------\n");
}

void main() {
  Q1();
  Q2();
  Q3();
  Q4();
}
