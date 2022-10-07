#include "main.h"

/**
  * _putchars - Prints characters
  * and a newline
  * @s: character array
  *
  * Return: void
  */
void _putchars(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
