#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: 1
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	del = (*head)->next;
	free(*head);
	*head = del;

	return (number);
}

