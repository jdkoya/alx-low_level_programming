#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to memory to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *empty;

	if (!head)
		return;

	while (*head)
	{
		empty = (*head)->next;
		free(*head);
		*head = empty;
	}

	*head = 0;
}

