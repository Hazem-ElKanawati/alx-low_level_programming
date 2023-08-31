#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: no. in base 10
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	temp = n;
	while ((temp >>= 1) > 0)
		shift++;
	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
		shift--;
	}
}
