#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	for (len = 0; str[len] != '\0'; len++)
	;

	i = (len + 1) / 2;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
