#include "variadic_functions.h"

/**
 * sum_them_all - adds args
 * @n: the number of arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (t = 0; t < n; t++)
	{
		sum = sum + (va_arg(args, int));
	}
	return (sum);
}
