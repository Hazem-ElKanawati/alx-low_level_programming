#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string
 * @s: pointer to the first char
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
