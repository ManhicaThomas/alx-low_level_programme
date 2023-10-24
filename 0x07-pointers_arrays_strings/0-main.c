#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints a buffer in hex format
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
	{
		if (i % 10 != 0)
		{
			printf(" ");
		}
		if (i % 10 == 0)
		{
			printf("0x%02x: ", i);
		}
		printf("%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
