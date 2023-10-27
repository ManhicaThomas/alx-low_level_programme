#include "main.h"

/**
 * _puts - This programs prints a string to stdout.
 * @str: This string has to be printed.
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
