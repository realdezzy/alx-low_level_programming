#include "lists.h"

/**
  * free_dlistint - Frees a dlistint list
  * @head: First node of dll
  *
  * Return: Void
  */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
