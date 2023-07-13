#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: number of bytes to be allocated
 * Return: address of memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
