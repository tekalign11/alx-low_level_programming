#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @a: number of times a line is printed
 * Return: Void
 */
void print_line(int a)

{
	int i;

	for (i = 0; i < a; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
