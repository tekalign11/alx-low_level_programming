#include <stdio.h>
/**
 * main - Print combination of digits
 *
 * Return: Always 0
 */
int main(void)
{
	int t;
	int o;

	for (t = 0; t <= 9; t++)
	{
		for (o = t + 1; 0 <= 9; o++)
		{
			putchar(t + '0');
			putchar(o + '0');
			if (t < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
