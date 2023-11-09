#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - this prints strings passed to the function separed by separators
 * @separator: the string that is used to separate strings
 * @n: number of unnamed parameters
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int z;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (z = 0; z < n; z++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (z < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
