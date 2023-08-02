#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to the first element of the string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(++s);
	else
	{
		return;
	}
}
