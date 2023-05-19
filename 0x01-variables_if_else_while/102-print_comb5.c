#include <stdio.h>

/**
 * main - Entry point
 * description: prints possible combo of two 2 digit nums
 * Return: Always success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 9; j++)
			for (k = 0; k < 10; k++)
				for (l = 1; l < 10; l++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(32);
					putchar(48 + k);
					putchar(48 + l);
					if (l < 9)
					{
						putchar(44);
						putchar(32);
					}
				}
	putchar('\n');
	return (0);
}
