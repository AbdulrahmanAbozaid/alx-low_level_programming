#include <unidstd.h>
/**
 * main - Entry point
 *
 * Description: write(int fd, const void *buf, size_t count)
 *
 * Return: Always 1 (Fail)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
