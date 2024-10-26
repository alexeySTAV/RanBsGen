#ifndef PROCESS_FLAGS
#define PROCESS_FLAGS
#include "flags.h"

/**
 * @brief Processes flags provided by user.
 * Returns a flags*, which needs to be manually freed.
 * @param argc Number of flags, argc from main().
 *
 * @param argv Flags themselves, argv[] from main().
 */

Flags *processFlags(int argc, char *argv[]);

#endif // !PROCESS_FLAGS
