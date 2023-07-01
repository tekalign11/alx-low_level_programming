#include <stdio.h>

/**
 * main - entry point
 * Description: this program prints sum of even fibonacci
 * Return: always success
 */

int main(void)
{
	long int n1 = 1, n2 = 2;
	long int i, n3;
	long int sum = 2;

	for (i = 3; (n3 = n1 + n2)  < 4000000; i++)
	{
		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%ld\n", sum);
	return (0);
}
