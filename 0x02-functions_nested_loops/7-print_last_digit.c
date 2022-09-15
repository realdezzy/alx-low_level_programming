#include "main.h"

/**
 * print_last_digit - Prints last digit of a variable
 * @n: character to test
 * Return:  int - value
 *
 */

int print_last_digit(int n)
{

	return (n > 0 ? n % 10 : (-1 * n) % 10);
}
