#include "main.h"

/**
 * read_testfile - read
 * @filename: file
 * @letters: str
 *
 * Return: size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t ctr;
	char ser[MAX_READ_BUF * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	ctr = read(file, &ser[0], letters);
	ctr = write(STDOUT_FILENO, &ser[0], ctr);
	close(file);
	return (ctr);
}
