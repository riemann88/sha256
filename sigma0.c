#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

uint32_t rotr32(uint32_t x, unsigned int n) {

  n %= 32;

  if (n == 0)
    return x;

  return (x >> n) | (x << (32 - n));
}
uint32_t sigma0(uint32_t x) {

  return rotr32(x, 2) ^ rotr32(x, 13) ^ rotr32(x, 22);
}
/**------------- */
int main(void) {
  uint32_t x = 0x00000001;

  printf("x       = 0x%08" PRIX32 "\n", x);
  printf("ROTR 2  = 0x%08" PRIX32 "\n", rotr32(x, 2));
  printf("POTR 13 = 0x%08" PRIX32 "\n", rotr32(x, 13));
  printf("ROTR 22 = 0x%08" PRIX32 "\n", rotr32(x, 22));
  printf("Sigma0  = 0x%08" PRIX32 "\n", sigma0(x));

  return 0;
}
