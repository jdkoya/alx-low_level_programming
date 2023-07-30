#include <stdlib.h>
#include "main.h"

/**
  *_calloc - a function that allocates memory
 * @nmemb: argument
 * @size: size of argument
 * Return: allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (0);
	return (ptr);
}

