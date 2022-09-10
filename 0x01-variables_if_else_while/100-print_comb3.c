#include <stdio.h>
/**
  * main - Print digits to stdout
  * Return: 0
  */
int main(void)
{
	for (int i = 48; i < 57; i++)
	{
		for (int j = 49; j < 58; j++)
		{
			putchar(i);
			putchar(j);
		if (i <= 57)
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar(10);
	return (0);
}
