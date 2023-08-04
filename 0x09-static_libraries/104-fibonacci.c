#include <stdio.h>

/**
 * num_length - number n num_length
 * @n: number
 *
 * Return: int
*/

int num_length(int n)
{
	int len = 0;

	if (!n)
	return (1);

	while (n)
	{
	n /= 10;
	len++;
	}
	return (len);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000;
	unsigned long f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = num_length(mx) - 1 - num_length(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("0");
			initial0s--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f2 = sum;
		f1o = f2o;
		f2o = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
