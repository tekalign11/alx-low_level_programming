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

	for (m = 0; m < 100; m++)
		for (n = m + 1; n < 100; n++)
		{
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(32);
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (!((m == 98) & (n == 99)))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	putchar('\n');
	return (0);
}
