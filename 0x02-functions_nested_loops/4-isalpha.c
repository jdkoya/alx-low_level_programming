#include "main.h"
/**
 * _isalpha - A programme that checks alphabets
 * Return: 0 (seccessful)
 * @c: character checker
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
