#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is obtained
 * with malloc, and can be freed with free.
 * @str: point to a string
 * Return: pointer to a srting
 */

char *_strdup(char *str)
{
	char *string;
	int i, d;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	string = malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	for (d = 0; str[d]; d++)
		string[d] = str[d];
	return (string);
}
