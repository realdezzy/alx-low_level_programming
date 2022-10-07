#include<stdlib.h>
#include "main.h"

/**
  * print_int - Prints integers
  * @n: integer to be printed
  *
  * Return: void
  */

void print_int(long n)
{
	/**
	 *If number is smaller than 0, put a - sign
	 *and change number to positive
	 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* Remove the last digit and recur */
	if (n / 10)
		print_int(n / 10);

	/* Print the last digit */
	_putchar(n % 10 + '0');
}

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
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{ _putchars("Error");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  _putchars("Error");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	print_int(mul);
	_putchar('\n');
	return (0);
}
