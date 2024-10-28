#include "../include/constructString.h"
#include "../include/processFlags.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  Flags *fl = processFlags(argc, argv);
  if (fl == NULL)
    return 0;
  char *string = constructString(fl);
  printf("%s\n", string);
  free(string);
  return 0;
}
