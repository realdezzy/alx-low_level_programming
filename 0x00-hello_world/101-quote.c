#include <stdio.h>
/**
* main - Print to standard error
* Return: 1 is returned
*/
int main(void)
{
	/*
	*
	* Print text to standard error using fwrite
	*/
	fwrite("and that piece of art is useful\" - Dora Korpar, 2016-10-19\n",
			59, 1, stdout);
	return (1);
}
