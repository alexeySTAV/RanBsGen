#include "../include/processFlags.h"
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

Flags *processFlags(int argc, char *argv[]) {
  Flags *fl = (Flags *)malloc(sizeof(Flags));
  fl->length = 16;

  struct option options[] = {{"upper", no_argument, NULL, 'u'},
                             {"characters", no_argument, NULL, 'c'},
                             {"numbers", no_argument, NULL, 'n'},
                             {"length", required_argument, NULL, 'l'},
                             {0, 0, 0, 0}};
  int opt;
  while ((opt = getopt_long(argc, argv, "ucnl:", options, NULL)) != -1) {
    switch (opt) {
    case 'u':
      fl->upper = true;
      break;
    case 'c':
      fl->characters = true;
      break;
    case 'n':
      fl->numbers = true;
      break;
    case 'l':
      char *arg = optarg;
      fl->length = strtol(arg, NULL, 10);
      break;
    case '?':
      if (optopt == 'l') {
        fprintf(stderr, "Flag -l (--length) requires an argument\n");
        fl = NULL;
        break;
      }
      fprintf(stderr, "Unknown flag -%c\n", optopt);
      fl = NULL;
      break;
    }
  }
  return fl;
}
