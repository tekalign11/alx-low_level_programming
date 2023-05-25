#include "main.h"
#include <unistd.h>

/**
 * print_numbers - print nums from 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
