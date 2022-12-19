#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: half ot the string to be printed
 */
void puts_half(char *str)
{
	int t;

	t = 0;
	while (str[t] != '\0')
	{
		if (t % 2 == 0)
			putchar(str[t]);
		t++;
	}
	putchar('\n');
}
