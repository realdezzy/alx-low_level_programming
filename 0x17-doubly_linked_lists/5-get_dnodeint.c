#include "lists.h"

/**
  * get_dnodeint_at_index - Returns nth node of
  * a dlistint_t linked list
  * @head: Pointer to first node
  * @index: index number of node
  *
  * Returns: Node at index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	if (head != NULL && index == 0)
		return (head);
	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n = n + 1;
	}
	return (NULL);
}
