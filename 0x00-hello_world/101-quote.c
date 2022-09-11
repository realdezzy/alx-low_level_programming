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
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",60,1,stderr);
	return (1);
}
