#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers up to 98
 * @n: the number to start from
 *
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
		while (n < 98)
		{
			printf("%d, ", n++);
			putchar("%d, ", 81);
			printf("%d\n", n);
		}
}
