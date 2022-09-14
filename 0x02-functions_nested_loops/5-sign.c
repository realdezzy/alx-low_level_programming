#include "main.h"

/**
 * print_sign - Prints sign of character
 * and returns 1, 0, -1
 * @n: character to test
 * Return:  int - 1 | 0 | -1
 *
 */

int print_sign(int n)
{

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
