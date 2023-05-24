#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fibonaci numbers
 * Return: Always success
 */
int main(void)
{
	int n1 = 0, n2 = 1;
	int i, n3;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i < 50; i++)
	{
		printf("%d, ", n3);
		n2 = n1;
		n3 = n2;
		n3 = n1 + n2;
	}
	return (0);
}
