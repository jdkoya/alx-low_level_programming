#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A programme that prints letter without e and q
 * Return: 0 (seccessful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
