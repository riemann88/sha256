#include <stdint.h>
#include <stdio.h>

uint8_t rotr8(uint8_t x, unsigned int n) {
  n %= 8;
  return (uint8_t)((x >> n) | (x << (8 - n)));
}
int main(void) {
  uint8_t x = 0x97;

  printf("original = 0x%02X\n", x);
  printf("rotr 1 = 0x%02X\n", rotr8(x, 6));

  return 0;
}
