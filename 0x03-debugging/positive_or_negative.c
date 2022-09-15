#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative - Positive or negative
 * Return: 0
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%u is zero\n", i);
	else
		printf("%u is positive\n", i);
}
