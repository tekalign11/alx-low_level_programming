#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @int: The number last digit to be printed
 * Description: Print the last digit
 * Return: The value of last digit
 */
int print_last_digit(int k)
{
	int n = k % 10;

	printf("%d", n);
	return (n);
}
