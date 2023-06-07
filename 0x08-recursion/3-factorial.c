#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number its factorial to be returned
 * Return: Factorial of a number
 */

int factorial(int n)
{
	int t;

	if (n < 0)
		t = -1;
	else if (n == 0 || n == 1)
		t = 1;
	else
	{
		t = (n * factorial(n - 1));
	}

	return (t);
}
