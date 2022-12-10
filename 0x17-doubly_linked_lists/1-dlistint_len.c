#include "lists.h"

/**
  * dlistint_len - gets number of element in a linked list
  * @h: Head of the list
  *
  * Return: Number of elements in the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n = 0;
	const dlistint_t *current;

	current = h;

	if (h == NULL)
		return (0);
	while(current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
