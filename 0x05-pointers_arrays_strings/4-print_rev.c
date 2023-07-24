#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;

	int j;

	while (1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	while (1)
	{
		i--;
		_putchar(s[i]);
		if (s[i] == 0)
			break;
	}
	_putchar('\n');
}
