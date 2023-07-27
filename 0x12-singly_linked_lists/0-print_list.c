#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - A function that prints elements
 * @h: a pointer to the list
 * Return: a node from the structure
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if ((*h).str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		nodes++;
		h = (*h).next;
	}
	return (nodes);
}
