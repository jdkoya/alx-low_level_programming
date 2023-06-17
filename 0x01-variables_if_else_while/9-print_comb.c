#include <stdio.h>
/**
 * main - A programme that prints all possible combination of
* single digit numbers
 * Return: 0 (seccessful)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
