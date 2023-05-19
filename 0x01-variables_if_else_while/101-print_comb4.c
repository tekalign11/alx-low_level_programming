#include <stdio.h>

/**
 * main - Entry point
 * description: prints combo of three digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
		for (j = 1; j < 9; j++)
			for (k = 2; k < 10; k++)
				if ((i < j) & (j < k))
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i < 7)
					{
						putchar(44);
						putchar(32);
					}
				}
	putchar('\n');
	return (0);
}
