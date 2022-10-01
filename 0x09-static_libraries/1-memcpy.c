#include "main.h"

/**
  * _memcpy - copy n amount of memory from src to destination
  * @dest: destination we are copying to
  * @src: source to copy from
  * @n: amount of data to copy
  *
  * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++, dest++, src++)
		*dest = *src;
	dest = dest - n;
	return (dest);
}
