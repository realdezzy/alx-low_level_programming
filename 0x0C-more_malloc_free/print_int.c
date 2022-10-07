#include "main.h"

/**
  * print_int - Prints integers
  * @n: integer to be printed
  *
  * Return: void
  */

void print_int(long n)
{
    /**
      *If number is smaller than 0, put a - sign
      *and change number to positive
      */
    if (n < 0) {
       _putchar('-');
        n = -n;
    }
    /* Remove the last digit and recur */
    if (n/10)
        print_int(n/10);

    /* Print the last digit */
    _putchar(n%10 + '0');
}

