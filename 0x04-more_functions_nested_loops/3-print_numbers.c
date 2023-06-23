#include "main.h"
/**
 * print_numbers - A programme that prints digits from 0 to 9 in a line
 *   * Return: 0
 */
void print_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
