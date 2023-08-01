#include "lists.h"

/**
 * sum_listint - a function that calculates the sum of the data
 * @head: pointer to first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *first = head;

	while (first)
	{
		sum += (*first).n;
		first = (*first).next;
	}

	return (sum);
}

