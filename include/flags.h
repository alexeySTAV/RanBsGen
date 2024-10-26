#ifndef FLAGS
#define FLAGS
#include <stdbool.h>
/**
 *@brief A flags structure, contains the state of every flag provided
 */
typedef struct flags {
  /**
   * @brief upper, indicates if -u or --upper flag was set.
   * If set, includes uppercase letters in final string.
   */
  bool upper;

  /**
   * @brief characters, indicates if -c or --characters flag was set.
   * If set, includes special characters like #, *, &, etc. in final string.
   */
  bool characters;

  /**
   * @brief numbers, indicates if -n or --numbers flag was set.
   * If set, includes numbers in final string.
   */
  bool numbers;

  /**
   * @brief size, 16 by default, overwritten if set.
   */
  int length;
} flags;

#endif
