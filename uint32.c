#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void) {

  uint32_t a = 0xFFFFFFF0;
  uint32_t b = 0x00000030;

  uint32_t result = a + b;

  printf("a      = %" PRIu32 "\n", a);
  printf("b      = %" PRIu32 "\n", b);
  printf("result = %" PRIu32 "\n", result);

  printf("a      = 0x%08" PRIx32 "\n", a);
  printf("b      = 0x%08" PRIx32 "\n", b);
  printf("result = 0x%08" PRIx32 "\n", result);

  return 0;
}
