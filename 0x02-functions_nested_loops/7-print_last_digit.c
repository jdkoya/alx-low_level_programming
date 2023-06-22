#include "main.h"
/**
 * print_last_digit - A programme that prints last digits
 * Return: 0 (seccessful)
 * @n: is an integer
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);
}
