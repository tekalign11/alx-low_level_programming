#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fibonaci numbers
 * Return: Always success
 */
int main(void)
{
	int n, m;
	int sum = 0;

	for (n = 1; n < 51; n++)
	{
		sum = sum + n;
		printf("%d, ", sum);
	}
	return (0);
}
