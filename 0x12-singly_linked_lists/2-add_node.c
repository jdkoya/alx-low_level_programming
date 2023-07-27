#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that adds a new node
 * @head: pointer to the original list
 * @str: pointer to the new node
 * Return: pointer to the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *member;
	int length = 0;

	member = malloc(sizeof(list_t));
	if (member == 0)
		return (NULL);
	while (str[length])
		length++;
	(*member).len = length;
	(*member).str = strdup(str);
	(*member).next = *head;
	*head = member;
	return (member);
}
