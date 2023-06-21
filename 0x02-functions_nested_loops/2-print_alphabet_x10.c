#include "main.h"
/**
* print_alphabet_x10 - A programme that prints letters from a to z 10 times
* Return: 0 (seccessful)
*/
void print_alphabet_x10(void)
{
	char c;
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
