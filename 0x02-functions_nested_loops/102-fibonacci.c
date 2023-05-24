#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 fibonaci numbers
 * Return: Always success
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 50; n++)
	{
		if (n < 2)
		{
			printf("1, ");
		}
		if (n >= 2)
			for (m = 0; m < 48; m++)
			{
				n = m + n;
				printf("%d, ", n);
			}
	}
	return (0);
}
