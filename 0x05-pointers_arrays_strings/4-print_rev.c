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
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	for (i = t - 1; i >= 0; i--)
	{
		_putchar(s[i] + '0');
	}
	printf("\n");
}
