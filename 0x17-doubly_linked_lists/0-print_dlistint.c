#include "lists.h"

/**
  * print_dlistint - Prints all the elements
  * of a dlistint_t list
  * @h: Head of the list
  *
  * Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int num = 0;
	const dlistint_t *current;

	current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%i\n",current->n);
		num++;
		current = current->next;
	}

	return (num);
}
