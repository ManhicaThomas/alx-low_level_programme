#include "main.h"

/**
 * print_binary - function that prints a binary equivalent
 * of a decimal number.
 * @n: number to be printed in a binary.
 */

void print_binary(unsigned long int n)
{
	int w, num = 0;
	unsigned long int currrent;

	for (w = 63; w >= 0; w--)
	{
		current = n >> w;

		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
