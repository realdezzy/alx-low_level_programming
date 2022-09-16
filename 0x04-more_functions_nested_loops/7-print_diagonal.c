#include "main.h"

/**
  * print_diagonal - Print / n number of times
  * @n: number of times param
  *
  *Return: Nothing
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(47);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
