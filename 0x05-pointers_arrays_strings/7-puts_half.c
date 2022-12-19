#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: half of a string
 */

void puts_half(char *str)
{
	int drug, half;

	drug = 0;
	while (str[drug] != '\0')
		drug++;
	half = drug / 2;
	if (drug % 2 == 1)
		half++;
	while (half < drug)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
