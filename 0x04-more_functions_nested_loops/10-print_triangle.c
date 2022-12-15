#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @l: number of lines
 * Return: 0
 */
void print_triangle(int size)
{
	int o, p;

	for (o = 0; o < l; o++)
	{
		for (p = 1; p < (l - o); p++)
			_putchar(' ');
		for (p--; p < l; p++)
			_putchar();
		if (o < (l - 1))
			_putchar("\n");
	}
	_putchar("\n");
}


