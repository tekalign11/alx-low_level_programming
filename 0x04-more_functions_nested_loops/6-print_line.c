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
		if (k == 0)
		{
			_putchar('\n');
		}
		else if (k > 0)
		{
			_putchar(95);
		}
		else
		{
			k = -n;
			_putchar(95);
		}
	}
	_putchar('\n');
}
