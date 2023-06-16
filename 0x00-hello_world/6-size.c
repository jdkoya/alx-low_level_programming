#include <stdio.h>
/**
 * main - A programme that prints the size of variables types
 * Return: 0 (seccessful)
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int L;
	float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

