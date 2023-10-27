#include <stdio.h>

/**
 * main - This prints the name and is followed by a new line.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
