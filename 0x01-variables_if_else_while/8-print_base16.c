#include <stdio.h>
/**
 * main - A programme that prints all numbers of base 16 in lower case
 * Return: 0 (seccessful)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
