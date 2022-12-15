#include "main.h"
/**
 * print_square - prints a square
 * @s: size of the square
 * Return: void
 */
void print_square(int s)

{
	int a;
	int b;

	for (a = 0; a < s; a++)
	{
		for (b = 0; b < s; b++)
		{
			_putchar(35);
		}
		if (a != s - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

