#include <stdio.h>

/**
 * main - Entry point
 * description: prints all posible combinations of two numbers
 * Return: Always success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		{
			putchar(48 + n);
			if (n < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	putchar('\n');
	return (0);
}
