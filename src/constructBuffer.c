#include "../include/constructBuffer.h"
#include "../include/buffers.h"
#include "../include/flags.h"
#include <stdlib.h>
#include <string.h>
char *constructBuffer(Flags *fl) {
  int bufsize = strlen(lower) + strlen(upper) * fl->upper +
                strlen(characters) * fl->characters +
                strlen(numbers) * fl->numbers + 1;
  char *buffer = (char *)malloc(sizeof(char) * bufsize);
  int i = 0;
  strcpy(buffer + i, lower);
  i += strlen(lower);
  if (fl->upper) {
    strcpy(buffer + i, upper);
    i += strlen(upper);
  }
  if (fl->numbers) {
    strcpy(buffer + i, numbers);
    i += strlen(numbers);
  }
  if (fl->characters) {
    strcpy(buffer + i, characters);
    i += strlen(characters);
  }
  buffer[bufsize] = '\0';
  return buffer;
}
