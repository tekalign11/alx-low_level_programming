#include "main.h"

/**
 * print_square - draws a square
 * This functiondraws a square using hash
 * @size: The size of the square
 */
void print_square(int size)
{
	int t;
	int k = 0;

	while (k <= size)
	{
		for (; t <= size; t++)
		{
			if (t <= 0)
				_putchar('\n');
			else
				_putchar('#');
		}
		k++;
	}
	_putchar('\n');
}
