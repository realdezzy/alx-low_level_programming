
#include "main.h"

/**
 * _isalpha - Returns 1 if a char is an alphabet
 * and 0 if not
 * @c: character to test
 * Return:  int - 1 | 0
 *
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
