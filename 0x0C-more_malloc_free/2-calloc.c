#include <stdlib.h>
#include "main.h"

/**
 * _memset - a function that creates a constant byte
 * @s: pointer to memory
 * @b: character
 * @n: integer
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
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
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

