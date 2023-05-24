#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fibonaci numbers
 * Return: Always success
 */
int main(void)
{
	int n;
	int m = 0;

	for (n = 1; n < 50; n += m)
	{
		printf("%d, ", n); 
		m = n +  m;
	}
	return (0);
}
