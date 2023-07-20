#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums numbers
 * @n: number of intergers
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumList;
	unsigned int i, sum1 = 0;

	if (n == 0)
		return (0);
	va_start(sumList, n);
		for (i = 0; i < n; i++)
		{
			sum1 += va_arg(sumList, int);
		}
	va_end(sumList);
	return (sum1);
}
