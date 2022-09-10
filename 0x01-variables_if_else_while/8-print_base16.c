#include <stdio.h>
/**
  * main - Print digits to stdout
  * Return: 0
  */
int main(void)
{
	int i;

	int j;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (j = 97; j < 103; j++)
		putchar(j);
	putchar(10);
	return (0);
}
