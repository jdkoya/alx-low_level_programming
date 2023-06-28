#include "main.h"
/**
 *  * puts_half - A function that prints half of the numbers
 *   * @str: input
 *    * return: print
 */
void puts_half(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i > 4)
			_putchar(str[i]);
	}
	_putchar('\n');
}
