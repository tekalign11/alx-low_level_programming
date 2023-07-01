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
	long int sum;

	for (i = 3; i < 100; i++)
	{
		sum = n2;
		n3 = n1 + n2;
		if ((n3 % 2 == 0) && (n3 < 4000000))
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%ld\n", sum);
	return (0);
}
