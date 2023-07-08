#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary representation of a number
 * @n: the number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	m = (n & 1);
	_putchar(m + '0');
}
