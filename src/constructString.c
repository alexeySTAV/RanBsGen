#include "../include/constructString.h"
#include "../include/constructBuffer.h"
#include "../include/flags.h"
#include "../include/random.h"
#include <stdlib.h>
#include <string.h>

char *constructString(Flags *fl) {
  char *string = (char *)malloc(sizeof(char) * fl->length + 1);
  char *buffer = constructBuffer(fl);
  int buflen = strlen(buffer);
  for (int i = 0; i < fl->length; i++)
    string[i] = buffer[randint(buflen)];
  string[fl->length] = '\0';
  free(buffer);
  return string;
}
