#ifndef RANDOM
#define RANDOM
#include <stdlib.h>

/**
 * @brief a function, produces a random uint in [0, upto) range
 *
 * @param upto Upper limit for the random number
 */

int randint(int upto);

/**
 * @brief A random seed function
 */

int randseed();

#endif
