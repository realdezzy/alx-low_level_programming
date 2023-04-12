#include "search_algos.h"

/**
  * print_array - print all elements of array
  * @array: pointer to array
  * @first: first index of array
  * @last: last index of array
  *
  * Return: Nothing
  */
void print_array(int *array, int first, int last)
{
	int i = first;

	printf("Searching in array: ");
	for (; i < last + 1; i++)
	{
		if (i == last)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
}

/**
 * binary_search_min - binary search using recursion
 * @array: pointer to array
 * @first: first index of array
 * @last: last index of array
 * @value: value to be searched for
 *
 * Return: int index or -1
 */

int binary_search_min(int *array, int first, int last, int value)
{
	int mid;

	if (first > last)
		return (-1);

	print_array(array, first, last);
	mid = (first + last) / 2;
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
		return (binary_search_min(array, mid + 1, last, value));
	else
		return (binary_search_min(array, first, mid - 1, value));
}

/**
  * binary_search - Searches for a value in a sorted array
  * of integers using the Binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: the number of elements in array
  * @value: is the value to search for
  *
  * Return: int index or -1
  */
int binary_search(int *array, size_t size, int value)
{
	int index = 0;


	if (!array)
		return (-1);
	index = binary_search_min(array, 0, (int) size - 1, value);

	return (index);
}


