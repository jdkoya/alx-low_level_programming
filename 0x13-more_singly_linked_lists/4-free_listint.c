#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *empty;

	while (head)
	{
		empty = (*head).next;
		free(head);
		head = empty;
	}
}

