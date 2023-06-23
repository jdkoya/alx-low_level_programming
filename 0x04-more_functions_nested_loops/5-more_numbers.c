#include "main.h"
/**
 * more_numbers - A programme that prints 0 to 14 10 times
 * Return: 0 (seccessful)
 */
void more_numbers(void)
{
	char c;
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
