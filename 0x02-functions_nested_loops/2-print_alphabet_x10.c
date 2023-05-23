#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case
 * Description: prints the alphabet 10 times in lowercase
 *
 * Return: Always success (0)
 */
void print_alphabet_x10(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 97; k < 123; k++)
		{
			putchar(l);
		}
	}
	putchar('\n');
}
