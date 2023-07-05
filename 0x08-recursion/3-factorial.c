#include "main.h"

/**
 * factorial - A function that calculates the factorial of a number
 * @n: an integer
 * Return: 0 successful
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
