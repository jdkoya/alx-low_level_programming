#include "main.h"

/**
 * _pow_recursion - A function that calculates powers of numbers
 * @x: an integer
 * @y: an integer
 * Return: 0 successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
