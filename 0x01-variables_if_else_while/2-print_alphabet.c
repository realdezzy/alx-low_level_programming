#include <stdio.h>

/**
  * main - Print alphabets to stdout
  * Return: 0 always
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
