#include <stdio.h>

struct BitType {
  unsigned int bit_0 : 1;
  unsigned int bit_1 : 1;
  unsigned int bit_2 : 1;
  unsigned int bit_3 : 1;
  unsigned int bit_4 : 1;
  unsigned int bit_5 : 1;
  unsigned int bit_6 : 1;
  unsigned int bit_7 : 1;
};

union BitData {
  struct BitType bit_data;
  unsigned char byte_data;
};

void main() {
  union BitData temp;
  temp.byte_data = 0x63;

  printf("byte_data : %x\n", temp.byte_data);
  printf(
    "bit_data : %d%d%d%d %d%d%d%d\n",
    temp.bit_data.bit_7,
    temp.bit_data.bit_6,
    temp.bit_data.bit_5,
    temp.bit_data.bit_4,
    temp.bit_data.bit_3,
    temp.bit_data.bit_2,
    temp.bit_data.bit_1,
    temp.bit_data.bit_0
  );
}
