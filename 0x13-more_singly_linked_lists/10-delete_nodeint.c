#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	while (i < index - 1)
	{
		if (!del || !((*del).next))
			return (-1);
		del = (*del).next;
		i++;
	}


	current = (*del).next;
	(*del).next = (*current).next;
	free(current);

	return (1);
}

