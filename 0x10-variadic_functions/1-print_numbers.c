#include "variadic_functions.h"

/**
 * print_numbers - this prints numbers followed by a new line
 * @n: the number of parameters
 * @separator: the separator between two numbers
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(ap, int));
		if (y < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
