#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print to 98 form upper or lower
 * bound
 * @n : number to start from
 * Return: void
 */

void print_to_98(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
