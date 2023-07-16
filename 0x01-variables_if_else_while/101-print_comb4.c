#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= '9'; a++)
	{
		for (b = 49; b <= '9'; b++)
		{
			for (c = 50; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
