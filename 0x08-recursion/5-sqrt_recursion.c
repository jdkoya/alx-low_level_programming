#include "main.h"

int real_sqrt_recursion(int, int);

/**
 * _sqrt_recursion - a funtion that returns the square root of a number
 * @n: a number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - a function that finds the square root of a number
 * @n: a number
 * @i: number of times
 * Return: square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}

