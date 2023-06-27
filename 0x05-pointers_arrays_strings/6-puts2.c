#include "main.h"
/**
 * puts2 - A function that print even numbers from 0
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
