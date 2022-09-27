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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
