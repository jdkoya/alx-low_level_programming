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

	for (c = -1; c < 26; c++)
	{
		if (c != 4 && c != 16)
		{
		putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
