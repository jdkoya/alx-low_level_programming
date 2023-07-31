#include "main.h"

int real_prime(int, int);

/**
 * is_prime_number - a function that checks if an integer is a prime or not
 * @n: a number
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - calculates if a number is prime recursively
 * @n: a number
 * @i: number of times
 * Return: 1
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}

