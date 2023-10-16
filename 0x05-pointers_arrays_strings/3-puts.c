#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: 0 the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\10')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
