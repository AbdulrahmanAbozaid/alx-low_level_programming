#include <stdio.h>

/**
 * solve - find lrg
 * @num: num
 * Return: nothing
 */

void solve(long int num)
{
	int pm, lrg;

	while (num % 2 == 0)
		num /= 2;

	for (pm = 3; pm * pm <= num; pm += 2)
	{
		while (num % pm == 0)
		{
			num /= pm;
			lrg = pm;
		}
	}

	if (num > 2)
		lrg = num;

	printf("%d\n", lrg);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	solve(612852475143);
	return (0);
}
