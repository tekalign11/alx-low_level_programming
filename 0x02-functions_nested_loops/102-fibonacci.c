#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fibonaci numbers
 * Return: Always success
 */
int main(void)
{
	long int n1 = 1, n2 = 2;
	long int i, n3;

	printf("%ld, %ld, ", n1, n2);
	for (i = 3; i < 51; i++)
	{
		n3 = n1 + n2;
		printf("%ld, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
