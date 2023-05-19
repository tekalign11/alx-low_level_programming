#include <stdio.h>

/**
 * main - prints alphabet
 * description: prints alphabet il lower case using putchar function
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

