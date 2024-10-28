#include "../include/random.h"
#include <cpuid.h>
#ifdef USE_CPU_RANDOM
#include "cpuRand.c"
#endif
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int randseed() {
  int stack_var;
  int seed = time(NULL) ^ getpid() ^ (int)&stack_var;
  return seed;
}

int softRand(int upto) {
  int val = rand();
  return val % upto;
}

int randint(int upto) {

#ifdef USE_CPU_RANDOM
  int val = cpuRand(upto);
  if (val != 1)
    return val;
#endif
  return softRand(upto);
}
