#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to return its factorial
 * Return: if n > 0 return the factorial else -1
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	fact *= factorial(n - 1);

	return (fact);
}
