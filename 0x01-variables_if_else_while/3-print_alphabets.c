#include <stdio.h>

/**
 * main - Entry point
 * description: prints alphabetes in upper and lower using putchar
 * Return: Always 0
 */
int main(void)
{
	int n = 65;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (n = 65; n < 91; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
