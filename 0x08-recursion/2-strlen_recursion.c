#include "main.h"

/**
 * _strlen_recursion - calculate the number of chars in a string
 * @s: pointer to first char in the string
 * Return: number of chars in the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
