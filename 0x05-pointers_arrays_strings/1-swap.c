#include "main.h"
/**
 * swap_int - A programme that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * return 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
