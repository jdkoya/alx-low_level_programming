#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A programme that prints letter without e and q
 * Return: 0 (seccessful)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 97 && c != 113)
		{
		putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
