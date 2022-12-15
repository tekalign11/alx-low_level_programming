#include "main.h"
/**
 * print_number - prints an integer.
 * @t: input number
 * Return: Always 0
 */
void print_number(int t)

{
	unsigned int a, b, c;

	if (t < 0)
	{
		_putchar(45);
		a = t * -1;
	}
	else
	{
		a = t;
	}
	b = a;
	c = 1;
	while (b > 9)
	{
		b /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		_putchar(((a / c) % 10) + 48);
	}
}
