#include "main.h"
#include <string.h>
/**
 * _strlen - A programme that returns the length of a string
 * @s: a pointer
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
