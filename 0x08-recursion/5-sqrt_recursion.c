#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: The number to be squared
 * Return: The square root of a number
 */
int _sqrt_recursion(int n)
{
	int j = 1;

	if (j % 1 != 0 || n < 0)
		return (-1);
	{
		_sqrt_recursion(n);	
	}
	return (j);
}
