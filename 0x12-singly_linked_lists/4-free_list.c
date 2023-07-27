#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees memory
 * @head: pointer to head
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = (*head).next;
		free((*node).str);
		free(node);
	}
}
