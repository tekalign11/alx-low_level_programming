#include <stdio.h>

/**
 * main - prints hexadecimal
 * description: prints numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	for (n = 10; n < 16; n++)
	{
		putchar(87 + n);
	}
	putchar('\n');
	return (0);
}
