#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the minimum number of coins.
 * @argc: arguments
 * @argv: array of parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amount, i, balance;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	balance = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			balance++;
			amount = amount - coins[i];
		}
	}

	printf("%d\n", balance);
	return (0);
}

