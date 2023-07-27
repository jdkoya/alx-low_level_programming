#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node_end - a function that adds a new node at the end
 * @head: pointer to the head
 * @str: pointer to a string
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *node;
	size_t i;

	newNode = malloc(sizeof(list_t));
	if (newNode == 0)
		return (NULL);
	(*newNode).str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	(*newNode).len = i;
	(*newNode).next = NULL;
	node = *head;
	if (node == NULL)
		*head = newNode;
	else
	{
		while ((*node).next != NULL)
			node = (*node).next;
		(*node).next = newNode;
	}
	return (*head);
}
