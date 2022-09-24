#include "main.h"
/**
 * swap_int - swap variable values
 * @a: pointer param1
 * @b: pointer param2
 * Return: Void
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

