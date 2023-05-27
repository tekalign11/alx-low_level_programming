#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times - be printed
 * Return: nothing
 */
void print_line(int n)
{
	int k;

	for (; k <= n; k++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else if (n < 0)
		{
			k = -n;
			_putchar('_');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
