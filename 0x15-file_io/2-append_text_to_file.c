#include "main.h"

/**
 * _strlen - faf
 * @s: fags
 *
 * Return: fafa
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}


/**
 * append_text_to_file - gadgd
 * @filename: fasfa
 * @text_content: ffa
 *
 * Return: gdsgdsg
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t size, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len)
		size = write(file, text_content, len);
	close(file);
	return (size == len ? 1 : -1);
}
