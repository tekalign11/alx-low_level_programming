#include "main.h"

/**
 * _puts_recursion - prints a sstring
 * @s: The pointer to string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
