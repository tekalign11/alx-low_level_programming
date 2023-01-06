#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int nurse;

	for (nurse = 0; str[nurse] != '\0'; nurse++)
		putchar(str[nurse]);
	putchar('\n');
}
