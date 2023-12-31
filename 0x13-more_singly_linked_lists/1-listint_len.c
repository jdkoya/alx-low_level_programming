#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linkint_t
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = (*h).next;
	}

	return (number);
}

