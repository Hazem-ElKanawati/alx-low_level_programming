#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 no.
 * @argc: arg count
 * @argv: arg vector
 * Return: 0(sucess) 1(Error)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		int num1 = atoi(argv[1]);

		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
