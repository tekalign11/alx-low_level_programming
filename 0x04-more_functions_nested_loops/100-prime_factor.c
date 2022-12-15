#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long int z, m;

	z = 612852475143;

	for (m = 2; m <= z; m++)
	{
		if (z % m == 0)
		{
			z /= m;
			m--;
		}
	}
	printf("%ld\n", m);
	return (0);
}

