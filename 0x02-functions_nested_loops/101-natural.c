#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints sum of multiples of 3 and 5
 * Return: Always success (0)
 */
int main(void)
{
	int t, a;
	int sum1 = 0;
	int sum2 = 0;


	for (t = 3; t < 1024; t =+ 3)
	{
		sum1 =  t + sum1;
	}
	for (a = 5; a < 1024; a =+ 5)
	{
		sum2 = a + sum2;
	}
	printf("%d\n", sum1 + sum2);
	return (0);
}	
