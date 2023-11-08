#include "function_pointers.h"

/**
 * print_name - function prints the name
 * @name: name to be printed
 * @f: pointer to the function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
