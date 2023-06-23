#include "main.h"
/**
 *  * _isdigit - A programme that checks for digits
 *   * Return: 1 if letter is upper, 0 if not
 *    * @c: digit checker
 */
int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
}
