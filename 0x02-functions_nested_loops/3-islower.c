#include "main.h"
/**
 * _islower - A programme that checks for lower case letters
 * Return: 1 if letter is lower, 0 if not
 * @c: lower case character checker
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
