#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: half ot the string to be printed
 * Return: void
 */
void puts2(char *str)
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
