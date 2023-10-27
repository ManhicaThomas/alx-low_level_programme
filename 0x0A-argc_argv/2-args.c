#include <stdio.h>

/**
 * main - This prints all arguments it receives.
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
