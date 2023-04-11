#include "search_algos.h"

/**
  * linear_search -  searches for a value in an array of
  * integers using the Linear search algorithm
  * @array: Array to be searched
  * @size: Size of array
  * @value: The value we are searching for
  *
  * Return: int index or -1
  */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;


	if (array == NULL)
		return (-1);

	for (; index < (int) size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}
	return (-1);
}
