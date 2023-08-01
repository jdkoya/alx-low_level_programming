#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *insert = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (!idx)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; insert && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = (*insert).next;
			(*insert).next = new;
			return (new);
		}
		else
			insert = (*insert).next;
	}
	return (NULL);
}

