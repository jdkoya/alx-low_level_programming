#include "main.h"
/**
 *  * print_most_numbers - A programme that prints digits
 *  * from 0 to 9 in a line without 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d != '2' && d != '6')
		{
			_putchar(d);
		}
	}
	_putchar('\n');
}
