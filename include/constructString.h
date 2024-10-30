#ifndef CONSTRUCT_STRING
#define CONSTRUCT_STRING
#include "flags.h"

/**
 * @brief A function that constructs a string based on provided flags.
 * Retruns a heap allocated string that needs to be freed.
 * @param fl User provided flags
 */

char *constructString(Flags *fl);

#endif // !CONSTRUCT_STRING
