#include <stdio.h>
/**
 * main - A programme that prints all single digits of base 10
 * Return: 0 (seccessful)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
