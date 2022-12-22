#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int kutir = n;

	if (n < 0)
	{
		putchar('-');
		kutir = -kutir;
	}
	if ((kutir / 10) > 0)
		print_number(kutir / 10);
	_putchar((kutir % 10) + '0');
}

