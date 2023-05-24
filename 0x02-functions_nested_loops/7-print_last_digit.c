#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @k: The number last digit to be printed
 * Description: Print the last digit
 * Return: The value of last digit
 */
int print_last_digit(int k)
{
	int n = k % 10;

	if (k >= 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' - n);
		return (-n);
	}
}
