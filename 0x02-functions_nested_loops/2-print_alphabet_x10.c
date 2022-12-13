#include "main.h"

/**
 * print_alphabet_x10 - prints alphabetes ten times
 */
void print_alphabet_x10(void)
{
	int t;
	char i;

	for (t = 1; t <= 10; t++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
