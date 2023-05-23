#include <stdio.h>
#include "main.h"

/**
 * main - prints in lowercase
 * print_alphabet - prints alphabet in lowercase
 * The function prints alphabete in lowercase
 * Return: Always success (0)
 */
void print_alphabet(void)
{
	char t;

	for (t = 97; t < 123; t++)
	{
		putchar(t);
	}
}
