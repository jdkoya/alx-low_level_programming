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
printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", (unsigned long)sizeof(long long int);
	printf("Size of float: %d byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}

