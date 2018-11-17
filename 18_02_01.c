#include <stdio.h>

typedef struct People {
  char name[12];
  unsigned short int age;
  float height;
  float weight;
} Person;

void main() {
  Person data;

  printf("대상자의 정보를 입력하세요.\n");
  printf("이름 : ");
  scanf("%s", data.name);
  printf("나이 : ");
  scanf("%hu", &data.age);
  printf("키 : ");
  scanf("%f", &data.height);
  printf("몸무게 : ");
  scanf("%f", &data.weight);

  printf("\n임력한 정보는 다음과 같습니다. \n");
  printf("%s : %d세, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
}
