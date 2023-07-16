#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (int a = 48; a <= '9'; a++)
	{
		for (int b = 48; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
