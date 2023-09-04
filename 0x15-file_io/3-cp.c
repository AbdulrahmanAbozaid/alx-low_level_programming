#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSION (S_IRGRP | S_IRUSR | S_IWGRP | S_IROTH | S_IWUSR)

/**
 * main - program
 * @agc: fa
 * @agv: arg vector
 *
 * Return: fasgs
 */


int main(int agc, char **agv)
{
	int file_1 = 0, file_2 = 0;
	ssize_t sz;
	char _buf[MAX_READ_BUF];

	if (agc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	file_1 = open(agv[1], O_RDONLY);
	if (file_1 == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, agv[1]), exit(98);
	file_2 = open(agv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (file_2 == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, agv[2]), exit(99);

	while ((sz = read(file_1, _buf, MAX_READ_BUF)) > 0)
		if (write(file_2, _buf, sz) != sz)
			dprintf(STDERR_FILENO, ERR_NOWRITE, agv[2]), exit(99);
	if (sz == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, agv[1]), exit(98);

	file_1 = close(file_1);
	file_2 = close(file_2);

	if (file_1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_1), exit(100);

	if (file_2)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_2), exit(100);
	return (EXIT_SUCCESS);
}
