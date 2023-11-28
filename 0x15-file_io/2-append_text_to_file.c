#include "main.h"
#include <string.h>

/**
 * _strlen - this finds the length of a str.
 * @str: the pointer to the str.
 * Return: the length of the str.
 */
size_t _strlen(char *str)
{
	size_t z;

	for (z = 0; str[z]; z++)
		;
	return (z);
}

/**
 * append_text_to_file - this appends a text at the of
 * a file.
 * @filename: the name of the file.
 * @text_content: NULL terminated str to add at the end of 
 * the file.
 * Return: 1 on success and -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
