#include <immintrin.h>
#include <stdbool.h>

bool tryRdseed(unsigned int *val, int maxRetries) {
  for (int i = 0; i < maxRetries; i++) {
    if (_rdseed32_step(val)) {
      return true;
    }
  }
  return false;
}

bool tryRdrand(unsigned int *val, int maxRetries) {
  for (int i = 0; i < maxRetries; i++) {
    if (_rdrand32_step(val)) {
      return true;
    }
  }
  return false;
}

int cpuRand(int upto) {
  unsigned int val;
  if (tryRdseed(&val, 10))
    return (int)val % upto;
  if (tryRdrand(&val, 10))
    return (int)val % upto;
  return -1;
}
