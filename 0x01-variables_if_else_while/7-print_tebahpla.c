#include <stdio.h>
/**
 * main - A programme that prints in reverse
 * Return: 0 (seccessful)
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
