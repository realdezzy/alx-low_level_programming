#include "main.h"

/**
 * _islower - Returns 1 if a char is lowercase
 * and 0 if not
 * @c: character to test
 * Return:  int - 1 | 0
 *
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
