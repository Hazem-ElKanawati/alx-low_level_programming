#include "main.h"

/**
 * puts2 - print every other char of a string
 * @str: string
 */

void puts2(char *str)
{
	int i, s = 0;

	while (str[s] != '\0')
	{
		s++;
	}

	for (i = 0 ; i <= s ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
