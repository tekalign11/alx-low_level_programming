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
	int t = 0;

	while (str[t] != '\0')
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\0');
}
