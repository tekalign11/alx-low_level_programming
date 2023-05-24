#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * prints + if number is positive and - if number negative
 * @n: the number to be checked
 * Description: returns 1 for positive, -1 for negative and 0 for zero
 * Return: Always success (0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		printf("-");
		return (1);
	}
}
