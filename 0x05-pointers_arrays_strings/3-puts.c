#include "main.h"

/**
 * _puts - prints a string
 *
 * This function prints a string to the standard output
 *
 * @str: The string to be printe
 *
 */
void _puts(char *str)
{
	int t;

	for (t = 0; t != '\0'; t++)
	{
		_putchar(t + '0');
	}
	_putchar('\n');
}
