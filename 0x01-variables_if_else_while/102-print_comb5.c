#include <stdio.h>

/**
 * main - Entry point
 * description: prints possible combo of two 2 digit nums
 * Return: Always success
 */
int main(void)
{
	int m;
	int n;
	int o;
	int p;

	for (m = 0; m < 10; m++)
		for (n = 0; n < 9; n++)
			for (o = 0; o < 10; o++)
				for (p = 0; p < 10; p++)
				{
					if ((m < o) | ((m == o) & (n < p)))
					{
						putchar(48 + m);
						putchar(48 + n);
						putchar(32);
						putchar(48 + o);
						putchar(48 + p);
						putchar(44);
						putchar(32);
					}
				}
	putchar('\n');
	return (0);
}
