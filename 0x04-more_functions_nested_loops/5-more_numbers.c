#include "main.h"

/**
  * more_numbers - Prints digits from 0 - 9
  *
  */
void more_numbers(void)
{
	int loop1 = 0;
	int loop2;

	while (loop1 < 10)
	{
		for (loop2 = 0; loop2 <= 14;)
		{
			if (loop2 > 9)
				_putchar((loop2 / 10) + '0');
			_putchar((loop2 % 10) + '0');
			loop2++;
		}
		_putchar('\n');
		loop1++;
	}
}
