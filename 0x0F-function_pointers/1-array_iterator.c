#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that prints elements of array
 * @array: array
 *@size: number of elements to print
 *@action: pointer
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
