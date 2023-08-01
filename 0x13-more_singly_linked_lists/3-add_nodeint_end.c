#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of the list
 * @head: pointer to the first element
 * @n: data to insert in the new element
 * Return: 1
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *move = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	(*new).n = n;
	(*new).next = 0;

	if (*head == 0)
	{
		*head = new;
		return (new);
	}

	while ((*move).next)
		move = (*move).next;

	(*move).next = new;

	return (new);
}

