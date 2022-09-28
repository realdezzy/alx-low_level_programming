include "main.h"

/**
  * _strchr - Dezzy character search
  * @s: String param to search
  * @c: Character param to search for
  *
  * Return
  */
char *_strchr(char *s, char c)
{
	int l, i;

	l = 0;
	while (s[l] != '\0')
		l++;
	for (i = 0; i <= l; i++, s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}

