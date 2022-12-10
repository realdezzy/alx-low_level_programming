#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node to end of DLList
  * @head: pointer to pointer to first node of linked list
  * @n: integer value of node to be added
  *
  * Return: Address of new element or NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->prev = current;
		new->next = NULL;
		new->n = n;
		current->next = new;
		return (new);
	}
}
