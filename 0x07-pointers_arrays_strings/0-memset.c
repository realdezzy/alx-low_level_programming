#include "main.h"

/**
 * _memset - Dezzy memset
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0;i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

