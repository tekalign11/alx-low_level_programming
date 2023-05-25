#include "main.h"

/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int t;

	for (t = 0; t < 10; t++)
		if (t != 2 && t != 4)
			_putchar('0' + t);
}
