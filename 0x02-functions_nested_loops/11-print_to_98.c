#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers up to 98
 * @n: the number to start from
 *
 * Return: success
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i ", n);
		n--;
	}
	printf(98);
	putchar('\n');
}
