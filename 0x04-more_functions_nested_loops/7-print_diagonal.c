#include "main.h"
/**
 * print_diagonal - print_diagonal
 * @x: the number of times a diagonal is printed
 * Return: void
 */
void print_diagonal(int x)

{
	int i;
	int j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(92);
		if (i < (x - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
