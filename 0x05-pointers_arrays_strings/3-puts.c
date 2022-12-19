#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 * Return: the string
 */
void _puts(char *str)
{
	int nurse;

	for (nurse = 0; str[nurse] != '\0'; nurse++)
		_putchar(str[nurse]);
	_putchar('\n');

	return (0);
}
