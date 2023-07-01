#include <stdio.h>

/**
 * main - Entry point
 * description - Prints first 100 fibonacci numbers
 * Return: Always success
 */
int main(void)
{
	long long int n1 = 1, n2 = 2;
	long long int i, n3;

	printf("%lld, %lld, ", n1, n2);
	for (i = 3; i < 101; i++)
	{
		n3 = n1 + n2;
		printf("%lld", n3);
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
