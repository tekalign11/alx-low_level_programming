#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int i;
	int t = strlen(s);

	for (i = t - 1; i >= 0; i--)
	{
		printf("%c\n", s[i]);
	}
}
