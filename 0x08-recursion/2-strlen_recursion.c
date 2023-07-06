#include "main.h"

/**
 * _strlen_recursion - A function that prints the length of a string
 * @s: pointer of a string
 * Return: 0 seccess
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
