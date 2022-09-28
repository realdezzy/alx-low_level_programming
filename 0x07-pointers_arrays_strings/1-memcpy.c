include "main.h"

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

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
