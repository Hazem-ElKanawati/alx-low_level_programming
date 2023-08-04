#include <stdio.h>
#include <stdlib.h>

/**
 * main- calculate change
 * @argc: arg count
 * @argv: arg vector
 * Return: 0(Sucess) 1(Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int totalCoins = 0;

	totalCoins += cents / 25;
	cents %= 25;

	totalCoins += cents / 10;
	cents %= 10;

	totalCoins += cents / 5;
	cents %= 5;

	totalCoins += cents;

	printf("%d\n", totalCoins);

	return (0);
}

