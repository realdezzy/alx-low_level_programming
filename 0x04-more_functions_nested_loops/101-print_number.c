#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

	int d = 1, i = 0, count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / d != 0)
	{
		d *= 10;
		i++;
	}
	d = d / 10;

	while (count < i)
	{
		_putchar('0' + n / d);
		n = n - (n / d) * d;
		d = d / 10;
		count++;
	}

	if (i == 0)
		_putchar('0' + n);

}
