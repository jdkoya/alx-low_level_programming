#include "main.h"
/**
 * print_alphabet - programme that prints letters from a to z
 * Return: 0 (seccessful)
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);
	_putchar('\n');
}
