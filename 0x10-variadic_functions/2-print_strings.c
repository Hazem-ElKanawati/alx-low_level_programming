#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to separate the strings
 * @n: no. of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");
	va_end(args);
	
}
