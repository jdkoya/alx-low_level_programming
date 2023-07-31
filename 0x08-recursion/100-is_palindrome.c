#include "main.h"

int check_character(char *, int, int);
int _strlength_recursion(char *);

/**
 * is_palindrome - a function that checks if a string is a palindrome
 * @s: a string
 * Return: 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_character(s, 0, _strlength_recursion(s)));
}

/**
 * _strlength_recursion - returns the length of a string
 * @s: a string
 * Return: length of the string
 */
int _strlength_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlength_recursion(s + 1));
}

/**
 * check_character - a function that checks the characters for palindrome
 * @s: string to check
 * @i: number of times
 * @length: length of the string
 * Return: 1
 */
int check_character(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_character(s, i + 1, length - 1));
}

