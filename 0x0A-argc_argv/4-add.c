#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int num3, num4;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 + num2);
	}
	else if (argc == 5)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		num3 = atoi(argv[3]);
		num4 = atoi(argv[4]);
		printf("%d\n", num1 + num2 + num3 + num4);
	}
	else if (argc == 1)
		printf("0\n");
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
