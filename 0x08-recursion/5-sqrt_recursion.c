#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: The number to be squared
 * Return: The square root of a number
 */
int _sqrt_recursion(int n)
{
	int j = 0;
	int t;

	if (j % 1 != 0)
		return (-1);
	else
	{
		t = j * _sqrt_recursion(n / j);
	}
	return (t);
}
