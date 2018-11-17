#include <stdio.h>
#define MAX_COUNT 5

typedef char NAME_TYPE[14];

int AddFriend(
  NAME_TYPE *p_name,
  unsigned short int *p_age, 
  float *p_height,
  float *p_weight,
  int count
) {
  if (count < MAX_COUNT) {
    printf("\n새로운 친구 정보를 입력하세요\n");
    printf("1. 이름 : ");
    scanf("%s", *(p_name + count));
    printf("2. 나이 : ");
    scanf("%hu", p_age + count);
    printf("3. 키 : ");
    scanf("%f", p_height + count);
    printf("4. 몸무게 : ");
    scanf("%f", p_weight + count);
    printf("입력을 완료했습니다. \n\n");
    return 1;
  } else {
    printf("최대 인원을 초과하여 입력을 할 수 없습니다. \n");
    printf("최대 %d명까지만 관리 가능합니다. \n\n", MAX_COUNT);
  }
  return 0;
}

void ShowFriendList(
  NAME_TYPE *p_name,
  unsigned short int *p_age,
  float *p_height,
  float *p_weight,
  int count
) {
  int i;
  if (count > 0) {
    printf("\n등록된 친구 목록\n");
    printf("=====================================\n");
    for (i = 0; i < count; i++) {
      printf("%-14s, %3d, %6.2f, %6.2f\n", *(p_name + i), *(p_age + i), *(p_height + i), *(p_weight + i));
    }
  } else {
    printf("\n등록된 친구가 없습니다.\n\n");
  }
}

void main() {
  NAME_TYPE name[MAX_COUNT];
  unsigned short int age[MAX_COUNT];
  float height[MAX_COUNT];
  float weight[MAX_COUNT];
  int count = 0, num;

  while (1) {
    printf("                 [메뉴]               \n");
    printf("=====================================\n");
    printf("1. 친구 추가                           \n");
    printf("2. 친구 목록 보기                       \n");
    printf("3. 종료                               \n");
    printf("=====================================\n");
    printf("번호 선택 : ");
    scanf("%d", &num);

    if (num == 1) {
      if (1 == AddFriend(name, age, height, weight, count)) count++;
    } else if (num == 2) {
      ShowFriendList(name, age, height, weight, count);
    } else if (num == 3) {
      break;
    } else {
      printf("1~3 번호만 선택할 수 있습니다!!\n\n");
    }
  }
}
