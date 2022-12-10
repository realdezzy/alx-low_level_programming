#include "lists.h"

/**
  * sum_dlistint - Returns the sum of all data of a dlistint list
  * @head: pointer to first node of linked list
  *
  * Return: sum of data(n)
  */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
