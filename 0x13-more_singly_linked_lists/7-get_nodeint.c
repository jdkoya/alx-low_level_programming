#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the node
 * @head: first node
 * @index: index of the node to return
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ret = head;

	while (ret && i < index)
	{
		ret = (*ret).next;
		i++;
	}

	return (ret ? ret : NULL);
}

