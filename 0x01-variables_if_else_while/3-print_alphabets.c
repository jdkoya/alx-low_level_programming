#include <stdio.h>
/**
 * main - A programme that prints the size of variables types
 * Return: 0 (seccessful)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int c;

	for (c = 0; c < 52; c++)
	{
	putchar(alp[c]);
	}
	putchar('\n');
	return (0);
}
