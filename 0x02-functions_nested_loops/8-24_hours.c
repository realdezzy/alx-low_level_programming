#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */

void jack_bauer(void)
{

int first_hour;
int second_hour;
int first_minute;
int second_minute;
int n = 9;

second_hour = 0;
while (second_hour <= 2)
{
	if (second_hour == 2)
	{
		/*Restrain to 23h, not 29*/
		n = 3;
	}
	first_hour = 0;
	while (first_hour <= n)
	{
		second_minute = 0;
		while (second_minute <= 5)
		{
			first_minute = 0;
			while (first_minute <= 9)
			{
				_putchar('0' + second_hour);
				_putchar('0' + first_hour);
				_putchar(':');
				_putchar('0' + second_minute);
				_putchar('0' + first_minute);
				_putchar('\n');
				first_minute++;
			}
			second_minute++;
		}
		first_hour++;
	}
	second_hour++;
}

}
