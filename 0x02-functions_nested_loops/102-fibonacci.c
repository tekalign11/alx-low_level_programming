#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fibonaci numbers
 * Return: Always success
 */
int main(void)
{
	int n1 = 1, n2 = 2;
	int i, n3;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i < 51; i++)
	{
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
