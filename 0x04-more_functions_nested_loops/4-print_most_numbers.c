#include "main.h"

/**
  * print_most_numbers - Prints digits from 0 - 9
  * except 2 and 4
  */
void print_most_numbers(void)
{
	int val;

	for (val = 48; val < 58; val++)
	{
		if (val == 50 || val == 52)
			continue;
		_putchar(val);
	}
	_putchar('\n');
}
