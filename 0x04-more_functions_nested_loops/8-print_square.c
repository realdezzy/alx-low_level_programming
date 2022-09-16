
#include "main.h"

/**
  * print_square - Print # n * n number of times
  * @n: number of times param
  *
  *Return: Nothing
  */
void print_square(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
