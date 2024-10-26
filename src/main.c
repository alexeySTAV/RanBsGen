#include "../include/processFlags.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  Flags *fl = processFlags(argc, argv);
  if (fl == NULL)
    return 0;
  return 0;
}
