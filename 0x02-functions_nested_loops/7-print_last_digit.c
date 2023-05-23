#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @k: The number last digit to be printed
 * Description: print the last digit
 * Return: The value of last digit
 */
int print_last_digit(int k)
{
	printf("%d", k % 10);
	return (k % 10);
}
