#include "main.h"

/**
 * print_diagonal - draws diagonal line
 *
 * @n: the number of times a slash printed
 */
void print_diagonal(int n)
{
	int t;

	if (n == 0)
		_putchar('\n');
	else
		for (; t <= n; t++);
	 {	{
			_putchar('\');
		}
	}
	_putchar('\n');
}
