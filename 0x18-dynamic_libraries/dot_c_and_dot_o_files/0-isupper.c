#include "main.h"
/**
 * _isupper - A programme that checks for upper case letters
 * Return: 1 if letter is upper, 0 if not
 * @c: upper case character checker
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
