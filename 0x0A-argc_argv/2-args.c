#include "main.h"
#include <stdio.h>

/**
 * main- prints all args
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0(sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
