#include "main.h"

/**
  * print_line - Print _ n number of times
  * @n: number of times param
  *
  *Return: Nothing
  */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
