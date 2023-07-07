#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary representation of a number
 * @n: the number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		m = ((n >> 1));
		if ((m * 2) == n)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		n = m;
	}
}
