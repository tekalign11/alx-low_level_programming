#include <stdio.h>

/**
 * main - Entry point
 * description - Prints first 100 fibonacci numbers
 * Return: Always success
 */
int main(void)
{
	long int n1 = 1, n2 = 2;
	long int i, n3;

	printf("%ld, %ld, ", n1, n2);
	for (i = 3; i < 101; i++)
	{
		n3 = n1 + n2;
		printf("%ld", n3);
		if (i < 100)
		{
			printf(", ");
		}
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
