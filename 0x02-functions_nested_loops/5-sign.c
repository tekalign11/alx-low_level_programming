#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be printed
 * Return: 1 if number is positive and 0 if number is zero and -1 other else
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
		if (n > 0)
		{
			return (1);
			_putchar(+);
		}
		else
		{
			return (-1);
			_putchar(-);
		}
}
