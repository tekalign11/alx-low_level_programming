#include <stdio.h>

/**
 * main - Entry point
 * description: print single digit base 10 nums
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	putchar('\n');
	return (0);
}
