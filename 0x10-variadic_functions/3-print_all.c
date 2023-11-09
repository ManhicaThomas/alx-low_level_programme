#include "variadic_functions"

/**
 * print_all - this prints all of the arguments when specified
 * @format: specifies all the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c';
			printf("%c", va_arg(a_list, int));
			flag = 0;
			break;
			case 'i';

