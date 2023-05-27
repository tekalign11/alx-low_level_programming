#include "main.h"

/**
 * print_square - draws a square
 * This functiondraws a square using hash
 * @size: The size of the square
 */
void print_square(int size)
{
	int t;
	int k = 1;

	while (k <= size)
	{
		for (t = 1; t <= size; t++)
		{
			if (size <= 0)
				_putchar('\n');
			else
				_putchar('#');
		}
		k++;
		_putchar('\n');
	}
}
