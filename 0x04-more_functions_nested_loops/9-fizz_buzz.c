#include <stdio.h>
/**
 * main - printing numbers 3 and 5
 * Return: Always 0
 */

int main(void)

{
	int f;

	f = 1;
	printf("%d", f);
	for (f = 2; f <= 100; f++)
	{
		if ((f % 3 == 0) && (f % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (f % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (f % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", f);
		}
	}
	printf("\n");
	return (0);
}
