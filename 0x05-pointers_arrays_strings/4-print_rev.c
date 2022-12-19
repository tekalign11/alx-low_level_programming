#include "main.h"

/**
 * print_rev - prints a string, in reverse order
 *
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int nurse;

	for (nurse = 0; s[nurse] != '\n'; nurse++)
		;
	for (nurse = nurse - 1; s[nurse] != '\n'; nurse--)
		putchar(s[nurse]);
	putchar('\n');
}
