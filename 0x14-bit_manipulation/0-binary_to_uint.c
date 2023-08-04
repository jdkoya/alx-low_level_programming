#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: pointer to a string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == 0)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

