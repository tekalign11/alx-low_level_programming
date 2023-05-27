#include "main.h"

/**
 * print_diagonal - draws diagonal line
 *
 * @n: the number of times a slash printed
 */
void print_diagonal(int n)
{
	int t;

	while (n > 0)
	{
		for (t = 1; t <= n; t++)
		{
			_putchar(' ');
		}
		_putchar(92);	
	}
	_putchar('\n');
}
