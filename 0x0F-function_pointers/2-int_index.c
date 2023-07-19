#include "function_pointers.h"
#include <stdlib.h>

/**
 *  * int_index - a function that search for integers
 *   * @array: pointer to array
 *    *@size: size
 *    *@cmp: pointer to a function
 *     * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
