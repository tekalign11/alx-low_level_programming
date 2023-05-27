#include <stdio.h>

/**
 * main - Entry point
 * This functions prints fizzbuzz
 * Return: Always success (0)
 */
int main(void)
{
	int t;

	for (t = 1; t <= 100; t++)
	{
		if (t % 3 == 0)
			printf("Fizz ");
		else if (t % 5 == 0)
			printf("Buzz ");
		else if ((t & 5 == 0) && (t % 3 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", t);
	}
}
