#include <stdio.h>

/**
 * main - prints alphabet
 * description: prints alphabet il lower case using putchar function
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
