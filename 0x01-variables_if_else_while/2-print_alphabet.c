#include <stdio.h>
#include <stdlib.h>
/**
 * main - A programme that prints lowcase letters
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c < 26; c++)
	{
	putchar(alp[c]);
	}
	putchar("\n");
	return (0);
}
