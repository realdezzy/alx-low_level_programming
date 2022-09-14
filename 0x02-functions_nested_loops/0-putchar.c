#include "main.h"

/**
 * main - Print _putchar to stdout
 * Return: always 0
 *
 */
int main(void)
{
	char putStr[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(putStr[i]);

	_putchar('\n');
	return (0);
}
