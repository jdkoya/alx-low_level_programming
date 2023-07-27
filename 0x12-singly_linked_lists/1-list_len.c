#include "lists.h"

/**
 * list_len - A fuction that returns the number of elements
 * @h: pointer to a linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = (*h).next;
		num++;
	}
	return (num);
}
