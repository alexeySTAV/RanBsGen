#ifndef CONSTRUCT_BUFFER
#define CONSTRUCT_BUFFER
#include "flags.h"

/**
 * @brief A buffer constructor.
 * Returns a dynamically allocated char buffer, which needs to be freed
 * afterwards.
 * @param fl User provided flags, based on which the function constructs a
 * buffer.
 */
char *constructBuffer(Flags *fl);

#endif // !CONSTRUCT_BUFFER
