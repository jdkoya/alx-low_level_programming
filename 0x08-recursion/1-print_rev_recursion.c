#include "main.h"

/**
 * _print_rev_recursion - a function that print a string in reverse
 * @s: a pointer to a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
