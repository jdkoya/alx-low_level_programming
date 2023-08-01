#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of linkint_t
 * @head: pointer to the first node in the list
 * @n: pointer to new data
 * Return: 1
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	(*new).n = n;
	(*new).next = *head;
	*head = new;

	return (new);
}

