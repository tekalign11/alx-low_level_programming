#include "main.h"

/**
 * print_diagonal - draws diagonal line
 *
 * @n: the number of times a slash printed
 */
void print_diagonal(int n)
{
	int t;
	int k = 1;

	if (n > 0)
	{
		while (k <= n)
		{
			for (t = 1; t <= k; t++)
			{
				_putchar(' ');
			}
			_putchar(92);
			k++;
			_putchar('\n');
			
		}
	}
	else
		_putchar('\n');
}
