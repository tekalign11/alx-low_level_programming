#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the natural number
 * Return: the square root If n has a natural square root else -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
