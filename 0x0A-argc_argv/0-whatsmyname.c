#include <stdio.h>
#include "main.h"

/**
 * main- Prints the name of the file
 * Return: always 0
 * @argc: arguments count
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
