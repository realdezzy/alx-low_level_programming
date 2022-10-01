#include "main.h"
/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	int l, l2, i, j, byt;

	l = 0, l2 = 0, byt = 0;
	while (s[l] != '\0')
		l++;
	while (accept[l2] != '\0')
		l2++;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				byt += 1;
				break;
			}
		}
		if (j == l2)
			break;
	}
	return (byt);
}

