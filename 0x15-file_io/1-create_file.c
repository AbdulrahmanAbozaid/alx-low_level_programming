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
 * create_file - fasasf
 * @filename: fsf
 * @text_content: fss
 *
 * Return: gsdgs
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t size, len = _strlen(text);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREATE | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (len)
		size = write(file, text_content, len);
	close(file);
	return (size == len ? 1 : -1);
}
