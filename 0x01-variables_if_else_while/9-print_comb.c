#include <stdio.h>

/**
 * main - Entry point
 * description: prints all posible combinations of two numbers
 * Return: Always success
 */
int main(void)
{
	int n;
	int t;

	for (n = 0; n < 10; n++)
		for (t = 0; t < 10; t++)
		{
			putchar(n + 0);
			putchar(t + 0);
			putchar(44);
		}
	putchar('\n');
	return (0);
}
