#include <stdio.h>

/**
 * main - Entry point
 * description: prints letters except e and q
 * Return: Always success
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 & n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
