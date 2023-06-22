#include "main.h"
/**
 * print_sign - A programme that prints signs of numbers
 * Return: 0 (seccessful)
 * @n: is an integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
