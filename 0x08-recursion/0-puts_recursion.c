#include "main.h"

/**
 * _puts_recursion - prints a sstring
 * @s: The pointer to string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
