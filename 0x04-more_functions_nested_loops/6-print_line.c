#include "main.h"

/**
 * print_line - draw straight line
 * @n: number of times - be printed
 * Return: nothing
 */
void print_line(int n)
{
	int k;

	for (k = 0; k <= n; k++)
	{
		if (k == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
