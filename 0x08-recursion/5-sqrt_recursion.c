#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: The number to be squared
 * Return: The square root of a number
 */
int _sqrt_recursion(int n)
{
	int k = 1 ;

	if (n < 0)
		return (-1);
	else if (n % k == 0 && k * k == n)
	{
		return _sqrt_recursion(n / k);
	}
	else if (k % 1 != 0)
		return (-1);
	return (k);
}
