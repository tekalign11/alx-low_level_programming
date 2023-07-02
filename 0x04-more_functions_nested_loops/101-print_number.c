#include "main.h"

/**
 * print_number - prints an intwgwr using putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int div = 1;

	if (n == 0)
		_putchar('0');
	while (n / div != 0)
	{
		div *= 10;
	}
	div /= 10;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		while (div != 0)
		{
			_putchar('0' + n / div);
			n = n % div;
			div /= 10;
		}
	}
	else
	{
		while (div != 0)
		{
			_putchar('0' + n / div);
			n = n % div;
			div /= 10;
		}
	}
}
