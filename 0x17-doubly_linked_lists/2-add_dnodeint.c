#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a DLList
  * @*head: pointer to pointer of the first node
  * @n: integer element of the new node
  *
  * Return: Address of new node or NULL if it fails
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		new->n = n;
		(*head)->prev = new;
		*head = new;
	}

	return (new);

}
