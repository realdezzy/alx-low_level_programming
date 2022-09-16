#include "main.h"

/**
  * _isupper - returns 1 if character is uppercase
  *
  * @c: character to check
  * Return: 1 or 0
  */
int _isupper(int c)
{
	int val;

	val = (c >= 65 && c <= 90) ? 1 : 0;
	return (val);
}
