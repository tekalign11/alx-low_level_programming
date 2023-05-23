#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: The beginning of number to be checked
 * Description: This function prints from n to 98
 * Return: Always success (0)
 */
void print_to_98(int n)
{
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	printf("\n");
	for (; n < 98; n ++)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
