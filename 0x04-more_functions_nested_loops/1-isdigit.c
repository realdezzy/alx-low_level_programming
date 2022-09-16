#include "main.h"

/**
  * _isdigit - returns 1 if character is a digit
  * or 0 if not
  *
  * @c: character to check
  * Return: 1 or 0
  */
int _isdigit(int c)
{
	int val;

	val = (c >= 48 && c < 58) ? 1 : 0;
	return (val);
}
