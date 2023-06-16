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
printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", sizeof(L));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}

